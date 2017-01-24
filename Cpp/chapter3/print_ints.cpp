#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a;
	vector<int> as;
	while(cin >> a) {
		as.push_back(a);
	}

	for(auto a = as.begin(); a != as.end(); a++) {
		*a *= 2;
	}

	for(auto a = as.begin(); a != as.end(); a++) {
		cout << (*a) << " ";
	}
	cout << endl;
	return 0;
}