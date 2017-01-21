#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	decltype(s.size()) limit = 0;
	while(limit < s.size()) {
		if(!ispunct(s[limit])) {
			cout << s[limit];
		}
		limit++;
	}
	cout << endl;
	return 0;
}