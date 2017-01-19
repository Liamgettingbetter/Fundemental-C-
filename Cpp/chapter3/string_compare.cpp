#include <iostream>
using namespace std;

int main() {
	string a, b;
	cout << "Enter two strings : " << endl;
	cin >> a >> b;
	if(a > b) {
		cout << "string a is greater than string b" << endl; 
	}
	else if(a < b) {
		cout << "string a is less than string b" << endl;
	}
	else 
		cout << "Two strings are equal." << endl;
	return 0;
}