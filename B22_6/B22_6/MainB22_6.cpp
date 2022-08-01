#include<iostream>
#include"B22_6.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << "So nguyen to lien sau : " << nt_liensau(n) << endl;
	cout << "So nguyen to lien truoc: ";
	if (nt_lientruoc(n) == 0) {
		cout << "NOT AVAILABLE" << endl;
	}
	else {
		cout << nt_lientruoc(n) << endl;
	}
	cout << "Phan tich thanh nhan tu: ";
	phantich(n);
	cout << "\n";
	cout << "Phan tich thanh nhan tu dang mu: ";
	phantichmu(n);
	cout << "\n";
	for (int i = 10000; i < 99999; i++) {
		if (kiemtra_nt(i) == 0) {
			cout << i << endl;
		}
	}
	return 0;
}