#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<< 20 % 7 << endl; // 20 / 7 = 2, remainder 6. it gives remainder of division.
	cout<< 10 * 3 << endl;

	// Incremenent and decremenent.
	// a++, ++a, a--, --a
	int a = 1;
	cout << a++ << endl; // returns 2
	cout << ++a << endl; // 2 + 1 = 3
	cout << --a << endl; // 3 - 1 = 2
	cout << a-- << endl; // 2 -- = 2

	// Logical Operators
	int b = 4 , c = 3;
	cout << (b < c) << endl;
	cout << (a > b) << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a <= b) << endl;
	cout << (a >= b) << endl;
}