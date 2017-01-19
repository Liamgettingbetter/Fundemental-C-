#include <iostream>
using namespace std;

// Read input string line by line.
int main() {
	string line;
	while(getline(cin, line))
		cout << line << endl;
	return 0;
}