#include"B22_4.h"
#include<math.h>
#include<iostream>
using namespace std;

void songuyento(int n) {
	int k = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			k++;
		}
	}
	if (k == 0) {
		cout << "n la so nguyen to.";
	}
	else {
		cout << "n khong la so nguyen to.";
	}
}

int sodep(int n) {
	int a;
	int b = 0;
	while (n % 10 != 0) {
		a = n % 10;
		b = b * 10 + a;
		n = n / 10;
	}
	return b;
}

void sodep_nt(int n) {
	int k;
	k = sodep(n);
	songuyento(k);
}

void tong_nt(int n) {
	int a;
	int b = 0;
	while (n % 10 != 0) {
		a = n % 10;
		b += a;
		n = n / 10;
	}
	songuyento(b);
}