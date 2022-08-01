#include<iostream>
#include"B26.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n > 22 || n < 0) {
		cout << "INVALID";
	}
	else {
		cout << giaithua(n);
	}
	return 0;
}