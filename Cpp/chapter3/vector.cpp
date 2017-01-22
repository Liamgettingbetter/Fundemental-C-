#include <iostream>
#include <vector>
using namespace std;

int main() {
	int element;
	vector<int> container;

	while(cin >> element) {
		container.push_back(element);
	}
	return 0;
}