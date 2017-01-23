#include <iostream>
#include <vector>
using namespace std;

int main() {
	int elem;
	vector<int> elems;

	while(cin >> elem) {
		elems.push_back(elem);
	}

	for(decltype(elems.size()) i = 0; i < elems.size() - 1; i++) {
		cout << elems[i] + elems[i + 1] << " ";
	}
	cout << endl;
	return 0;
}