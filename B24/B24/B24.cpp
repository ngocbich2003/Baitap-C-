#include<iostream>
#include<math.h>
#include"B24.h"
using namespace std;

//Bai 1
void nhapbasonguyen(int& a, int& b, int& c) {
	cout << "Nhap 3 so nguyen a, b, c: ";
	cin >> a >> b >> c;
}

void tongbaso(int& a, int& b, int& c) {
	cout << "Tong 3 so nguyen la: " << a + b + c;
}

//Bai 2
void nhapbasothuc(double& a, double& b, double& c) {
	cout << "Nhap 3 so thuc a, b, c: ";
	cin >> a >> b >> c;
}

void ktratamgiac(double& a, double& b, double& c) {
	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		cout << "3 so tren tao thanh tam giac";
	}
	else {
		cout << "3 so tren ko tao thanh tam giac";
	}
}

//Bai 3
void nhapn(int& n) {
	cout << "Nhap n: ";
	cin >> n;
}

void tongchuso(int n) {
	int a = 0;
	while (n / 10 != 0) {
		a = a + n % 10;
		n = n / 10;
	}
	a = a + n;
	cout << "Tong cac chu so cua n: " << a << endl;
}

void tichchuso(int n) {
	int a = 1;
	while (n / 10 != 0) {
		a = a * (n % 10);
		n = n / 10;
	}
	a = a * n;
	cout << "Tich cac chu so cua n: " << a << endl;
}

void firstn(int n) {
	while (n / 10 != 0) {
		n = n / 10;
	}
	cout << "Chu so dau tien cua n: " << n << endl;
}

//Bai 4
void nhaphaiso(int& a, int& b) {
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
}

void add(int& a, int& b) {
	cout << "Tong hai so: " << a + b << endl;
}

void divide(int& a, int& b) {
	cout << "Thuong hai so: " << a / b << endl;
}

void multiply(int& a, int& b) {
	cout << "Tich hai so: " << a * b << endl;
}

//Bai 5
int gtmax(int& a, int& b, int& c) {
	int max = 0;
	if (max < a) {
		max = a;
	}
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	return max;
}

void max(int& a, int& b, int& c) {
	cout << "Gia tri lon nhat: " << gtmax(a, b, c) << endl;
}

int gtmin(int& a, int& b, int& c) {
	int min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	return min;
}

void min(int& a, int& b, int& c) {
	cout << "Gia tri be nhat: " << gtmin(a, b, c) << endl;
}

void gtri_tb(int& a, int& b, int& c) {
	cout << "Gia tri trung binh cong: " << (a + b + c) / 3 << endl;
	cout << "Gia tri trung binh nhan: " << (a * b * c) / 3 << endl;
}

void max2(int& a, int& b, int& c) {
	int k;
	if (a < gtmax(a, b, c) && a > gtmin(a,b,c)) {
		k = a;
	}
	else  if (b < gtmax(a, b, c) && b > gtmin(a, b, c)) {
		k = b;
	}
	else {
		k = c;
	}
	cout << "Gia tri lon thu 2 cung la gia tri nho thu 2 va bang: " << k;
}
// Bai 6
void chiahet5(int& n) {
	if (n % 5 == 0) {
		n = n - 5;
	}
	while (n % 5 != 0) {
		n--;
	}
	cout << "So lon nhat be hon n chia het cho 5 la: " << n << endl;
}

void chiahetk(int& n, int& k) {
	if (n % k == 0) {
		n = n + k;
	}
	while (n % k != 0) {
		n++;
	}
	cout << "So nho nhat lon hon n chia het cho k la: " << n;
}
// Bai 7
int ucln(int& a, int& b) {
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
void GCD(int a, int b) {
	cout << "Uoc chung lon nhat: " << ucln(a, b) << endl;
}

void LCM(int a, int b) {
	int k;
	k = (a * b)/ ucln(a, b);
	cout << "Boi chung nho nhat: " << k;
}