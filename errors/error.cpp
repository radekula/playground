#include "error.h"


namespace err {




Error::Error()
{
	m_with_code = false;
};




Error::Error(std::string message)
{
	m_with_code = false;
	m_message = message;
};



Error::Error(std::string message, long code)
{
	m_with_code = true;
	m_message = message;
	m_code = code;
};



void Error::SetMessage(std::string message)
{
	m_message = message;
};




void Error::SetCode(long code)
{
	m_with_code = true;
	m_code = code;
};


}
