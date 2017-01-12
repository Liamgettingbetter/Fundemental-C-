#include <iostream>

/*
 * Read two numbers, and
 * write their sum to screen.
 */
int main() {
	std::cout << "Enter Two Numbers : " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " 
			  << v2 << " is " << v1 + v2 << std::endl;
	return 0;
}