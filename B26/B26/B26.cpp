#include<iostream>
#include"B26.h" 

//Bai 1
unsigned int giaithua(int n) {
	if (n < 2) {
		return 1;
	}
	else {
		return n * giaithua(n - 1);
	}
}

//Bai 2
unsigned int fibonaci(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibonaci(n - 1) + fibonaci(n - 2);
	}
}

//Bai 3
unsigned long long mu(int a, int b) {
	if (b == 1) {
		return a;
	}
	else {
		return a * mu(a, b - 1);
	}
}