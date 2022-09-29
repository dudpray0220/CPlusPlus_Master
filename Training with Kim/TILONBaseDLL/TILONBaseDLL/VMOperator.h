#pragma once
#include "Runnerable.h"
#include <string>


TILONNAMESPACE

// BASE_API를 안 쓰므로 DLL을 줘도 안에것 감춤.
class VMOperator : public IRunnerable
{
public:
	virtual int getObjectID() 
	{
		return 1;
	}

	virtual std::string ToString() 
	{
		return "VMOperator";
	}

	virtual void Run()
	{

	}
};

TILONNAMESPACEEND