#include <bits/stdc++.h>
using namespace std;

int main(){
	// string str, str1;
	// getline(cin, str);
	// cout << str << endl; 


	// int t;
	// cin >> t;
	// // t++;
	// cin.ignore();
	// while(t--){
	// 	string s;
	// 	getline(cin, s);
	// 	cout << s << endl;
	// }
	// cout << t;

	// Reverse String
	string str;
	cin >> str;
	string str_rev;
	for(int i = str.size() - 1; i >= 0; --i){
		// str_rev = str_rev + str[i];
		str_rev.push_back(str[i]);
	}
	cout << str_rev << endl;

	// Check Palindrome
	if(str == str_rev){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}