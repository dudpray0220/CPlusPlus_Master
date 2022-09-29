#pragma once
#define TILON_API_EXPORT
#include "TILONBase.h"
#include <string>

TILONNAMESPACE

interface BASE_API IRunnerable : public ITILONBase
{
public:
	virtual int getObjectID() = 0;
	virtual std::string ToString() = 0;
	virtual void Run() = 0;
	static IRunnerable* getObject(int id);
};

extern "C" __declspec(dllexport) IRunnerable* CreateObject(int id)  // dllexport·Î GetProcAddress() °¡´É.
{
	return IRunnerable::getObject(id);
}

TILONNAMESPACEEND