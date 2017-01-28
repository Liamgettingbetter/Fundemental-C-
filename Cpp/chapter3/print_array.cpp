#include <iostream>
#include <vector>
using namespace std;

int main() {
	int ia[3][4] = {
		{ 0 }, { 4 },
		{ 8 }
	};

	for(size_t i = 0; i < 3; i++) {
		for(size_t j = 0; j < 4; j++)
			cout << ia[i][j] << " ";
		cout << endl;
	}
}