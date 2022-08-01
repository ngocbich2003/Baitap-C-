#include<iostream>
#include"B26.h"
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (b < 0) {
		cout << "INVALID";
	}
	else {
		cout << mu(a, b);
	}
	return 0;
}