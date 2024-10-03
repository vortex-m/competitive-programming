#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n % 2 == 0){
		cout << "Divisible By 2.";
	}
	else if(n % 3 == 0){
		cout << "Divisible by 3.";
	}
	else{
		cout << "Error";
	}
}