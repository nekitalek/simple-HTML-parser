#pragma once
#include <string>
#include <iomanip>
#include <iostream>
							     
#define ERROR_CODE_DOCUMENT      1
#define ERROR_CODE_TAG           2
#define ERROR_CODE_ATTRIBUTE     3
#define ERROR_CODE_PARSER        4


inline void ERROR_MESSAGE(string msg, int error_code, int line, int column)
{
	switch (error_code)
	{
	    case (ERROR_CODE_DOCUMENT):
	    {
			cout << "[DocumentError line:" << line << " column:" << column << "] : " << msg << endl;
			break;
	    }
	    case (ERROR_CODE_TAG):
	    {
			cout << "[TagError line:" << line << " column:" << column << "] : " << msg << endl;
			break;
	    }
	    case (ERROR_CODE_ATTRIBUTE):
	    {
			cout << "[AttributeError line:" << line << " column:" << column << "] : " << msg << endl;
			break;
	    }
		case (ERROR_CODE_PARSER):
		{
			cout << "[ParserError line:" << line << " column:" << column << "] : " << msg << endl;
			break;
		}
	    default:
	    {
	    	return;
	    }
	}
}