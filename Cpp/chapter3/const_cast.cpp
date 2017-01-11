//: C03: const_cast.cpp
int main() {
	const int i = 0;
	// Deprecated form
	int *j = (int*) &i;
	// Preffered form
	j = const_cast<int*>(&i);
	// Cannot do simultaneous additional casting:
	//! long *l = const_cast<long*>(&i);
	volatile int k = 0;
	int *u = const_cast<int*>(&k);
}