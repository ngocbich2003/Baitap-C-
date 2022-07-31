#include "B22_2.h"

int GCD(int a, int b) {
	int k;
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}		
	}
	return a;
}

int LCM(int a, int b) {
	int k;
	k = a * b / GCD(a, b);
	return k;
}