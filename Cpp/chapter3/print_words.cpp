#include <iostream>
#include <vector>
using namespace std;

int main() {
	string word;
	vector<string> words;
	int counter = 0;

	while(cin >> word) {
		words.push_back(word);
	}

	for(auto a : words) {
		if(counter++ % 8 == 0) {
			cout << endl;
		}
		cout << a << " ";
	}
	cout << endl;
	return 0;
}