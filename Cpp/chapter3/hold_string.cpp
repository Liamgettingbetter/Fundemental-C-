#include <iostream>
#include <vector>
using namespace std;

int main() {
	string element;
	vector<string> holder;

	while(cin >> element) {
		holder.push_back(element);
	}

	return 0;
}