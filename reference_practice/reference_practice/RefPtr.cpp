#include <iostream>

void SwapByRef(int *ptr1, int *ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void SwapByRef2(int &ref1, int &ref2) { // not const
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void) {

	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	int val1 = 10, val2 = 20;

	std::cout << ref << std::endl; // 12
	std::cout << *pref << std::endl;
	std::cout << &*ptr << std::endl;
	std::cout << **dpref << std::endl;
	std::cout << &**dptr << std::endl;

	//SwapByRef(&val1, &val2);
	SwapByRef2(val1, val2);
	std::cout << "\n" << val1 << std::endl;
	std::cout << val2 << std::endl;

	

	return 0;
}