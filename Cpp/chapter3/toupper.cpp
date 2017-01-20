#include <iostream>
using namespace std;

int main() {
	string s("Hello Liam");

	for(auto &a : s)
		a = toupper(a);
	cout << s << endl;
	return 0;
}