#include <string>
#include <exception>
#include <iostream>
#include "error.h"




int main()
{
	int test_num = 0;
	
    try
    {
		throw err::Error("Example exception with message passed to constructor.");
    }
    catch(err::Error &e)
	{
		std::cout << "TEST " << ++test_num << ": " << e.what() << std::endl;
	};


    try
    {
		throw err::Error("Example exception with message and code passed to constructor.", 5);
    }
    catch(err::Error &e)
	{
		std::cout << "TEST " << ++test_num << ": " << e.what() << " (code: " << e.code() << ")" << std::endl;
	};
	
    try
    {
		throw err::Error("Example exception catched as std::exception.");
    }
    catch(std::exception &e)
	{
		std::cout << "TEST " << ++test_num << ": " << e.what() << std::endl;
	};


    try
    {
		err::Error error;
		error.SetMessage("Example exception with message passed to SetMessage method.");
		throw error;
    }
    catch(err::Error &e)
	{
		std::cout << "TEST " << ++test_num << ": " << e.what() << std::endl;
	};
	
	
    try
    {
		err::Error error;
		error.SetMessage("Example exception with message passed to SetMessage method and code passed to SetCode method.");
		error.SetCode(3);
		throw error;
    }
    catch(err::Error &e)
	{
		std::cout << "TEST " << ++test_num << ": " << e.what() << " (code: " << e.code() << ")" << std::endl;
	};
};
