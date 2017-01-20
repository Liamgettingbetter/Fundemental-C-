#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	if(!s.empty())
		cout << s[0] << endl;
	return 0;
}