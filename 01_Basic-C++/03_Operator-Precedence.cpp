#include<bits/stdc++.h>
using namespace std;

int main(){
	// (), [], ->, ., ++, --  => Left to Right
	// + - ! ~ -- (type)* & sizeof  => Right to Left
	// * / %  => Left to Right
	// + -  => Left to Right
	// << >>  => Left to Right
	// < <= => >  => Left to Right
	// == !=  => Left to Right
	// &  => Left to Right
	// ^  => Left to Right
	// |  => Left to Right
	// &&  => Left to Right
	// ||  => Left to Right
	// ?:  => Right to Left
	// = += -= *= /= %=>> =<<= &= ^= |=   => Right to Left

	cout << 7 / 2 * 3 << endl;
	cout << 3 * 7 / 2;
}