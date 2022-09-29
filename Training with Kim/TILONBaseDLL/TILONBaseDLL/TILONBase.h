#define TILON_API_EXPORT
#include "macro.h"
#include <string>


TILONNAMESPACE

interface BASE_API ITILONBase
{
public:
	virtual int getObjectID() = 0;
	virtual std::string ToString() = 0;
};

TILONNAMESPACEEND