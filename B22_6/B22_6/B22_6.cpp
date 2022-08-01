#include"B22_6.h"
#include<iostream>
#include<math.h>
using namespace std;

int kiemtra_nt(int a) {
	int k = 0;
	if (a == 1) {
		k = 1;
	}
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			k++;
		}
	}
//k = 0 thì là số nguyên tố
	return k;
}

int nt_liensau(int a) {
	while (kiemtra_nt(a+1) != 0) {
		a = a + 1;
	}
	return a+1;
}

int nt_lientruoc(int a) {
	while (kiemtra_nt(a - 1) != 0) {
		a = a - 1;
	}
	return  a - 1;
}

void phantich(int a) {
	for (int i = 2; i <= a; i++) {
		while (a % i == 0) {
			a = a / i;
			if (a != 1) {
				cout << i << "*";
			}
			else {
				cout << i;
			}
		}
	}
}

void phantichmu(int a) {
	int x = 0;
	for (int i = 2; i <= a; i++) {
		x = 0;
		while (a % i == 0) {
			a = a / i;
			x++;
		}
		if (x != 0) {
			if (a != 1) {
				cout << i << "^" << x << "*";
			}
			else {
				cout << i << "^" << x;
			}
		}
	}
}