#pragma once
#include "Runnerable.h"
#include <string>


TILONNAMESPACE

// BASE_API�� �� ���Ƿ� DLL�� �൵ �ȿ��� ����.
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