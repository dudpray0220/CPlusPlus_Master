#pragma once
#include "Runnerable.h"
#include <string>


TILONNAMESPACE

// BASE_API�� �� ���Ƿ� DLL�� �൵ �ȿ��� ����.
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