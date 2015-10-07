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


    

void ErrorLog::Log(MessageType type, Error &err)
{
	for(auto stream = m_streams.begin(); stream != m_streams.end(); stream++)
	{
		if(stream->message_types & type)
			*(stream->stream) << err.what();
	};
};




long ErrorLog::OpenLog(std::string file_path, MessageType messages_type)
{	
	return 0;
};



void ErrorLog::CloseLog(long log_id)
{
	for(auto stream = m_streams.begin(); stream != m_streams.end(); stream++)
	{
		if(stream->id == log_id)
		{
			stream->stream->close();
			m_streams.erase(stream);
		};
	};
};



}
