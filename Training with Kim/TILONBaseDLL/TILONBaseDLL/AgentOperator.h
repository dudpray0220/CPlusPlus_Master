#pragma once
#include "Runnerable.h"
#include <string>


TILONNAMESPACE

// BASE_API를 안 쓰므로 DLL을 줘도 안에것 감춤.
class AgentOperator : public IRunnerable
{
public:
	virtual int getObjectID()
	{
		return 2;
	}

	virtual std::string ToString()
	{
		return "AgentOperator";
	}

	virtual void Run()
	{

	}
};

TILONNAMESPACEEND