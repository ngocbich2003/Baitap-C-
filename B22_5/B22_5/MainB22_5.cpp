#include<iostream>
#include"B22_5.h"
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << "So nguyen to trong khoang a, b la: " << "\n";
	nguyento(a, b);
	cout << "So chinh phuong trong khoang a, b la: " << "\n";
	chinhphuong(a, b);
	cout << "So thuan nghich trong khoang a, b la: " << "\n";
	thuannghich(a, b);
	cout << "So co tong cac chu so la so nguyen to trong khoang a, b la: " << "\n";
	tongnt(a, b);
	return 0;
}