//: C03:ArrayArgumetns.cpp
#include <iostream>
#include <string>
using namespace std;

void func1(int a[], int size) {
	for(int i = 0; i < size; i++)
		a[i] = i * i - i;
}

void func2(int *a, int size) {
	for(int i = 0; i < size; i++)
		a[i] = i * i + i;
}

void print(int a[], string name, int size) {
	for(int i = 0; i < size; i++)
		cout << name << "[" << i << "] = "
			 << a[i] << endl;
}