#include<iostream>
#include"B22_4.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	songuyento(n);
	cout << "\n";
	cout << "So dep la: " << sodep(n) << endl;
	cout << "So dep cua ";
	sodep_nt(n);
	cout << "\n";
	cout << "Tong cac chu so cua ";
	tong_nt(n); 
	return 0;
}