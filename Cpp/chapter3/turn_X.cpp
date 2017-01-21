#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while(cin >> s) {
		for(auto &index : s) {
			index = 'W';
		}
		cout << s << endl;
	}
	return 0;
}