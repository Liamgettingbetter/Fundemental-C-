//: C03: CatsInHats.cpp
// Simple demonstration of recursion
#include <iostream>
using namespace std;

void removeHats(char hat) {
	for(char c = 'A'; c < hat; c++) 
		cout << " ";
	if(cat <= 'Z') {
		cout << "cat " << cat << endl;
		removeHats(cat + 1);	// Recursive call
	}
	else 
		cout << "VOOM!" << endl;
}

int main() {
	removeHats("A");
}