#include"B22_5.h"
#include<math.h>
#include<iostream>
using namespace std;

int kiemtra_nt(int a) {
	int k = 0;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			k++;
		}
		if (k != 0) {
			k = 1;
		}
	}
	if (a == 1) {
		k = 1;
	}
	return k;
}
void nguyento(int a, int b) {
	int i;
	for (i = a; i <= b; i++) {
		if (kiemtra_nt(i) == 0) {
			cout << i << endl;
		}
	}
}

int kiemtra_cp(int a) {
	int k = 0;
	for (int i = 0; i <= a; i++) {
		if (i * i == a) {
			k = 1;
		}
	}
	return k;
}

void chinhphuong(int a, int b) {
	int i;
	for (i = a; i <= b; i++) {
		if (kiemtra_cp(i) == 1) {
			cout << i << endl;
		}
	}
}

int kiemtra_tn(int a) {
	int x;
	int k = 0;
	int y = 0;
	int n;
	n = a;
	while (a % 10 != 0) {
		x = a % 10;
		y = y * 10 + x;
		a = a / 10;
	}
	if (y == n && y > 10) {
		k = 1;
	}
	return k;
}

void thuannghich(int a, int b) {
	int i;
	for (i = a; i <= b; i++) {
		if (kiemtra_tn(i) == 1) {
			cout << i << endl;
		}
	}
}

int tongchuso(int a) {
	int x;
	int y = 0;
	while (a % 10 != 0) {
		x = a % 10;
		y += x;
		a = a / 10;
	}
	return y;
}

void tongnt(int a, int b) {
	int i;
	for (i = a; i <= b; i++) {
		if (kiemtra_nt(tongchuso(i)) == 0) {
			cout << i << endl;
		}
	}
}