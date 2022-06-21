#include<iostream>

using namespace std;

extern "C" int SomeFunction();

int main() {
	printf("%d\n", SomeFunction());
	getchar();
	return 0;
}