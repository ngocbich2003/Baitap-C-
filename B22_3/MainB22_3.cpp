#include <iostream>
#include "B22_3.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << "Tong cac chu so cua n: " << sumn(n) << endl;
	cout << "Tich cac chu so cua n: " << productn(n) << endl;
	cout << "Chu so dau cua n: " << firstn(n) << endl;
	return 0;
}