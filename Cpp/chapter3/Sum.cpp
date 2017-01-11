// The sum of two numbers provided by user
#include <iostream>

int main() {
	std::cout << "Enter Two Numbers : " << std::endl;
	int value1, value2;
	std::cin >> value1 >> value2;
	std::cout << "The sum of " << value1 << " and "
			  << value2 << " is " << value1 + value2 << std::endl;
	return 0;
}