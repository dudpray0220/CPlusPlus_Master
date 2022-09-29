#include <Windows.h>
#include <iostream>
#include "../../TILONBaseDLL/TILONBaseDLL/Runnerable.h"
//#pragma comment(lib, "C:\\Users\\byh\\source\\C++\\DLL_Call_Practice1\\Debug\\TILONBaseDLL.lib") // 이것 OR 프로젝트 속성 -> 링커에서 적용.

typedef TILON::IRunnerable*(*PRunnerable)(int);

int main() 
{
	HMODULE hModule = LoadLibraryA("TILONBaseDLL.dll"); // dll과 lib파일 둘 다 현 프로젝트의 Debug 폴더로 복사 -> dll 이름만 명명해주면 알아서 잡음.
	PRunnerable _obj = (PRunnerable)GetProcAddress(hModule, "CreateObject");
	_obj(1)->getObjectID();
	std::cout << _obj(1)->getObjectID() << std::endl;
	std::cout << _obj(2)->getObjectID() << std::endl;
	std::cout << _obj(1)->ToString() << std::endl;
	std::cout << _obj(2)->ToString() << std::endl;
	


	/*bool freeDll = FreeLibrary(hModule);
	if (freeDll) {
		std::cout << "Free DLL" << std::endl;
	}
	else {
		std::cout << "ERROR" << std::endl;
	}*/
}