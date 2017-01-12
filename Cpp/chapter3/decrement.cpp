// sum ten to zero
#include <iostream>

int main() {
	std::cout << "Sum ten to zero" << std::endl;
	int sum = 0;
	int limit = 10;
	while(limit > -1) {
		sum += limit--;
	}
	std::cout << sum << std::endl;
	return 0;
}