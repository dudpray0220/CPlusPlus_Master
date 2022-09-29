#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;
	cout << "my info" << endl;
	cout << "1. name" << endl;
	cout << "2. age" << endl;
	cout << "3. sex" << endl;
	cin >> user_input;

	switch (user_input) {
	case 1:
		cout << "byh" << endl;
		break;

	case 2:
		cout << "28" << endl;
		break;
	
	case 3:
		cout << "male" << endl;
		break;
	
	default:
		cout << "bye~" << endl;
		break;
	}

	return 0;
}