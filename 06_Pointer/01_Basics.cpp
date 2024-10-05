#include<bits/stdc++.h>
using namespace std;

int main(){
	int x = 4;
	int *px = &x;
	cout << "Addr x: " << &x << endl;
	cout << "Val px: " << px << endl;
	cout << "Val *px: " << *px << endl;
	*px = 5;
	cout << "x: " << x << endl;
	cout << "px + 1" << px + 1 << endl;

	int **ppx = &px;
	cout << &px;
}