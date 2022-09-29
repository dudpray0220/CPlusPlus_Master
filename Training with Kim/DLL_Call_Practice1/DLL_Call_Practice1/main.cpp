#include <Windows.h>
#include <iostream>
#include "../../TILONBaseDLL/TILONBaseDLL/Runnerable.h"
//#pragma comment(lib, "C:\\Users\\byh\\source\\C++\\DLL_Call_Practice1\\Debug\\TILONBaseDLL.lib") // �̰� OR ������Ʈ �Ӽ� -> ��Ŀ���� ����.

typedef TILON::IRunnerable*(*PRunnerable)(int);

int main() 
{
	HMODULE hModule = LoadLibraryA("TILONBaseDLL.dll"); // dll�� lib���� �� �� �� ������Ʈ�� Debug ������ ���� -> dll �̸��� ������ָ� �˾Ƽ� ����.
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