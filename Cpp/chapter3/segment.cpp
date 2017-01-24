#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i;
	vector<int> container(11);
	auto itr = container.begin();

	while(cin >> i) {
		*(itr + i / 10) += 1;
	}

	for(auto i = itr; i != container.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}