#include <iostream>
#include <vector>
using namespace std;

int main() {
	int in;
	vector<int> integers;

	while(cin >> in) {
		integers.push_back(in);
	}

	for(auto itr = integers.begin(); itr != integers.end() - 1; itr++) {
		cout << (*itr) + *(itr + 1) << " ";
	}

	cout << endl;
	return 0;
}