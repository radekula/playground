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
	Error(const std::string message);
	Error(const std::string message, long code);
	~Error() noexcept {};
	
	void SetMessage(const std::string message);
	void SetCode(long code);
	
	const char* what() const throw() { return m_message.c_str(); };
	long code() { return m_code; };
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
