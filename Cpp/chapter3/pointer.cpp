#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int *p, *q;
	p = q = &a;

	cout << "The address : " << p
		 << ", the number : " << *p << endl;
	p += q - p;
	cout << "The address : " << p
		 << ", the number : " << *p << endl;

	return 0;
}