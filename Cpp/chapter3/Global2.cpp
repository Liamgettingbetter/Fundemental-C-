//: C03: Global2
// Accessing external global variables 
extern int globe;
// { The linker resolves the reference }
void func() {
	globe = 47;
}