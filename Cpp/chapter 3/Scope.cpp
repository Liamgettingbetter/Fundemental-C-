//: C03: Scope.cpp
// How variables are scoped
int main() {
	int scp1;
	// scp1 is visible here
	{
		// scp1 is still visible here
		// ...
		int scp2;
		// scp2 is visible here
		// ...
		{
			// scp1 & scp2 are visible here
			// ...
			int scp3;
			// scp1, scp2 & scp3 are still visible here
			// ...
		}	// scp3 is destroyed here
		// scp3 is not visible here
		// scp1 & scp2 are still visible here
		// ...
	}	// <-- scp2 is destroyed here
	// scp3 & scp2 are not available here
	// scp1 is still visible here
	// ...
}	// scp1 is destroyed here 