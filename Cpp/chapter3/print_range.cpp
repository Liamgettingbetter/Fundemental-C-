// print the numbers in the range of two numbers 
// our user input
#include <iostream>

int main() {
	std::cout << "Enter two numbers : " << std::endl;
	int low, high;
	std::cin >> low >> high;
	while(low > high) {
		std::cout << "the first number is bigger than the second, "
				  << "please try again." << std::endl;
	    std::cin >> low >> high;
	}

	int newline = 0;

	while(low <= high) {
		newline++;
		std::cout << low++ << " ";
		if(newline % 10 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
	return 0;
}