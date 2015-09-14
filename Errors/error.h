#ifndef __ERROR_H__
#define __ERROR_H__


#include <string>


namespace err {

enum ErrorType { UNKNOWN = 2 << 0, ERROR = 2 << 1, WARNING = 2 << 2, NOTICE = 2 << 3 };


struct Error
{
    
    long Code;
    std::string Message;
};




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


}

#endif
