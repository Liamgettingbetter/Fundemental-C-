#include <iostream>
using namespace std;

int main() {
	string a, b;
	cout << "Type two strings : " << endl;
	cin >> a >> b;

	if(a.size() == b.size())
		cout << "string a & b has equal size." << endl;
	else if(a.size() > b.size())
		cout << "string a is longer than string b." << endl;
	else 
		cout << "string a is shorter than string b." << endl;
	return 0;
}