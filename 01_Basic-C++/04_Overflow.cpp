#include<bits/stdc++.h>
using namespace std;

int main(){
	// int, char, long int, long long int, float, double
	// -2 * 10^9 < int < 2 * 10^9
	// -2 * 10^9 < long int < 2 * 10^9
	// -9 * 10^18 < long long int < 9 * 10^18
	// 1.2 * 10^-38 < float < 3.4 * 10^38
	// 2.3 * 10^-308 < double < 1.7 * 10^308

	// long long int a = 100000;
	// long long int b = 100000;
	int a = 100000;
	int b = 100000;
	long long int c = a * 1LL * b;
	cout << c << endl;

	double d = 10000;
	double e = 10000;
	cout << d * e << endl;
	cout << fixed << d*e;
	// int mx = INT_MAX + 1;
	// cout << mx;
}
