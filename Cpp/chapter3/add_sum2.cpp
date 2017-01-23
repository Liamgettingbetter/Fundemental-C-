#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a;
	vector<int> as;

	while(cin >> a) {
		as.push_back(a);
	}

	int size = as.size() - 1;

	for(decltype(as.size()) i = 0; i < as.size() / 2; i++) {
		cout << as[i] + as[size - i] << " ";
	}
	cout << endl;
	return 0;
}