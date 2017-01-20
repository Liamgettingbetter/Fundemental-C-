#include <iostream>
using namespace std;

int main() {
	string a("Hello World !!!");
	decltype(a.size()) punct_nums = 0;
	for(auto c : a) {
		if(ispunct(c))
			++punct_nums;
	}
	cout << "The number of punctuation marks is " 
		 << punct_nums << endl;
	return 0;
}