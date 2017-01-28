#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char a[] = "A Lannister always";
	const char b[] = "pays his debts.";

	char c[strlen(a) + strlen(b)];
	strcpy(c, a);
	strcat(c, " ");
	strcat(c, b);
	cout << c << endl;
	return 0;
}