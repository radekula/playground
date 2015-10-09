#ifndef __ERROR_H__
#define __ERROR_H__


#include <string>
#include <memory>
#include <iostream>
#include <vector>
#include <fstream>
#include <exception>


namespace err {

enum MessageType { UNKNOWN = 2 << 0, ERROR = 2 << 1, WARNING = 2 << 2, NOTICE = 2 << 3 };


class Error : public std::exception
{
private:
	bool m_with_code;
    long m_code;
    std::string m_message;

public:
	Error();
	Error(std::string message);
	Error(std::string message, long code);
	~Error() throw() {};
	
	virtual void SetMessage(std::string message);
	virtual void SetCode(long code);
	
	virtual const char* what() const throw() { return m_message.c_str(); };
	virtual long code() { return m_code; };
};



struct LogStream
{
	long id = 0;
	unsigned short message_types = 0;
	std::shared_ptr<std::ofstream> stream;
};




class ErrorLog
{
private:
	std::vector<LogStream> m_streams;

public:
    void Log(MessageType type, Error &err);

public:
    long OpenLog(std::string file_path, MessageType messages_type);
    void CloseLog(long log_id);
};


}

#endif
