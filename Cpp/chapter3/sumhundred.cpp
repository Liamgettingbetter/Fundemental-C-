// sum numbers from 50 to 100
#include <iostream>

int main() {
	std::cout << "Below is the sum of numebers "
			  << "from 50 to 100" << std::endl;
	int limit = 50;
	int sum = 0;
  	while(limit < 101) {
  		sum += limit++;
  	}
  	std::cout << sum << std::endl;
  	return 0;
}