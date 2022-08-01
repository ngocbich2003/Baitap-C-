#include<iostream>
#include"B26.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 0 || n > 93) {
		cout << "INVALID";
	}
	else {
		cout << fibonaci(n);
	}
	return 0;
}