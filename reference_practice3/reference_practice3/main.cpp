#include <iostream>

int RefRetFuncOne(int &ref) {
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1); // ref�� num1�� ������. num2 = ref
	//int &num2 = RefRetFuncOne(num1); // ref�� num1�� ������. num1, ref, num2 = 2

	const int num3 = 12;
	const int *ptr3 = &num3;
	const int &ref3 = *ptr3;
	std::cout << *ptr3 << std::endl;
	std::cout << &*ptr3 << std::endl;
	std::cout << ref3 << std::endl;
	std::cout << &ref3 << std::endl;

	num1 += 1; // 3
	num2 += 100; //102
	std::cout << "\n" << num1 << std::endl;
	std::cout << num2 << std::endl; 
	//std::cout << ref << std::endl; // �Լ��� ��ȯ���� ���� ������ ref�� �Ҹ� (Like ��������)

	return 0;
}