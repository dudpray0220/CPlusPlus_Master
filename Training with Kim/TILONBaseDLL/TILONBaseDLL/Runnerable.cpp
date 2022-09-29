#pragma once
#include "Runnerable.h"
#include "VMOperator.h"
#include "AgentOperator.h"
#include <string>


TILONNAMESPACE

IRunnerable* IRunnerable::getObject(int id)
{
	switch (id)
	{
	case 1:
		return new VMOperator;

	case 2:
		return new AgentOperator;

	default:
		break;
	}
}


TILONNAMESPACEEND