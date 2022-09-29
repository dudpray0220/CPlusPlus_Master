#include <iostream>

int main(void) {
	int num1 = 1020;
	int &num2 = num1;
	int &num3 = num2;
	int &num4 = num3;

	num2 = 3047;
	std::cout << "VAL " << num1 << std::endl;
	std::cout << "REF " << num2 << std::endl;
	
	num4 = 1995;

	std::cout << "VAL " << &num1 << std::endl;
	std::cout << "REF " << &num2 << std::endl;
	std::cout << "REF " << &num3 << std::endl;
	std::cout << "REF " << &num4 << std::endl;
	
	std::cout << "REF " << num1 << std::endl;
	std::cout << "REF " << num4 << std::endl;

	return 0;
}