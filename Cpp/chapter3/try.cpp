#include <iostream>
using namespace std;

int main() {
	unsigned scores[11] = {};
	unsigned grade;
	while(cin >> grade) {
		if(grade <= 100) {
			++scores[grade / 10];
		}
	}

	for(size_t i = 0; i < 11; i++) {
		cout << scores[i] << " ";
	}
	cout << endl;
	return 0;
}