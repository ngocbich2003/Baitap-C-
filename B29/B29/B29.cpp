#include<iostream>
#include"B29.h"
using namespace std;

int main() {
	int n;
	int tong = 0;
	int tongchan = 0;
	cin >> n;
	int s[1000];
	if (n <= 0) {
		cout << "N INVALID";
	}
	else {
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		for (int i = 0; i < n; i++) {
			tong = tong + s[i];
		}
		cout << "Tong la: " << tong << endl;
		cout << "TBC la: " << tong / n << endl;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				tongchan = tongchan + s[i];
			}
		}
		cout << "Tong cac so o vi tri chan: " << tongchan << endl;
		cout << "Cap nguyen to: " << endl;
		for (int i = 0; i < n; i++) {
			if (nguyento(s[i]) == 0) {
				cout << "(" << i << ", " << s[i] << ")" << endl;
			}
		}
		cout << "Cap chinh phuong: " << endl;
		for (int i = 0; i < n; i++) {
			if (chinhphuong(s[i]) == 1) {
				cout << "(" << i << ", " << s[i] << ")" << endl;
			}
		}
		cout << "So thuan nghich: " << endl;
		for (int i = 0; i < n; i++) {
			if (thuannghich(s[i]) == 1) {
				cout << s[i] << endl;
			}
		}
	}
	return 0;
}