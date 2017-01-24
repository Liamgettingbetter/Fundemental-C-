// Binary Search -- C++ version
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> sorted;

	auto beg = sorted.begin(), end = sorted.end();
	auto mid = bed + (end - beg) / 2;

	while(mid != end && (*mid) != wanted) {
		if(wanted < mid) end = mid;
		else 
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}
	return 0;
}