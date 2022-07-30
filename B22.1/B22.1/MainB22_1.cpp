#include<iostream>
#include"B22_1.h"
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << "Tong hai so la: " << add(a, b);
	cout << "Hieu hai so la: " << subtract(a, b);
	cout << "Tich hai so la: " << multiply(a, b);
	cout << "Thuong hai so la: " << divide(a, b);
	return 0;
}
