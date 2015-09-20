#ifndef __ERROR_H__
#define __ERROR_H__


#include <string>
#include <exception>


namespace err {

enum ErrorType { UNKNOWN = 2 << 0, ERROR = 2 << 1, WARNING = 2 << 2, NOTICE = 2 << 3 };


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



/*
class ErrorLog
{
private:
    

public:
    ErrorLog();
    ~ErrorLog();

public:
    bool Log(Error &err);
    bool OpenLog();
    bool CloseLog();
}
*/

}

#endif
