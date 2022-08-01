#include<iostream>
#include<math.h>
#include"B29.h"

int nguyento(int n) {
	int k = 0;
	if (n <= 1) {
		k = 1;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			k++;
		}
	}
	return k;
}

int chinhphuong(int n) {
	int k = 0;
	for (int i = 1; i <= n; i++) {
		if (i * i == n) {
			k++;
		}
	}
	return k;
}

int thuannghich(int n) {
	int b;
	int k = 0;
	int a = 0;
	b = n;
	while (n / 10 != 0) {
		a = a * 10 + n % 10;
		n = n / 10;
	}
	a = a * 10 + n;
	if (a == b) {
		k++;
	}
	if (b < 10 && b > -10) {
		k = 0;
	}
	return k;
}