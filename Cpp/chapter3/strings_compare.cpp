#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string a = "A Lannister always";
	string b = "A Lannister always pays his debts.";

	if(a > b) {
		cout << "string a is larger than b.";
	} 
	else if (a < b) {
		cout << "string a is smaller than b.";
	}
	cout << endl;

	const char c[] = "A Lannister always";
	const char d[] = "A Lannister always pays his debts";

	if(strcmp(c, d) > 0) {
		cout << "character strings c is larger than d.";
	} 
	else if(strcmp(c, d) < 0) {
		cout << "character strings c is smaller than d.";
	}
	cout << endl;
	return 0;
}