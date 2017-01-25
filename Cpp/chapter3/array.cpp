#include <iostream>
using namespace std;

int main() {
	int tens[10];

	for(size_t i = 0; i < 10; i++) {
		tens[i] = i;
		cout << tens[i] << " ";
	}
	cout << endl;

	return 0;
}