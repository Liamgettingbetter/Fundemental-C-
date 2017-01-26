#include <iostream>
#include <cstddef>
using namespace std;

int main() {
	int array1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int array2[10] = { 0, 1, 2, 3, 4, 5, 6, 77, 88, 9 };

	for(size_t i = 0; i < 10; i++) {
		if(array1[i] > array2[i]) {
			cout << "array1 is larger than array2." << endl;
			break;
		}
		else if(array1[i] < array2[i]) {
			cout << "array1 is smaller than array2." << endl;
			break;
		}
	}
	return 0;
}