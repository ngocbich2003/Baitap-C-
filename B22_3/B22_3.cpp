#include "B22_3.h"

int sumn(int n) {
	int a = 0;
	int k;
	while (n % 10 != 0) {
		k = n % 10;
		n = n / 10;
		a += k;
	}
	return a;
}

int productn(int n) {
	int a = 1;
	int k;
	while (n % 10 != 0) {
		k = n % 10;
		n = n / 10;
		a *= k;
	}
	return a;
}

int firstn(int n) {
	int k;
	while (n / 10 != 0) {
		n = n / 10;
	}
	return n;
}