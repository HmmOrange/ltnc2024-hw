/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/time-conversion/problem
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	string s;
	cin >> s;
	if (s[8] == 'A'){
		if (s.substr(0, 2) == "12") s[0] = '0', s[1] = '0';
		s.erase(8, 2); 
		cout << s;
	}
	else{
		string t = s.substr(0, 2);
		t = to_string((t[0] - '0') * 10 + (t[1] - '0') + 12);
		if (t == "24") t = "12";
		s[0] = t[0]; s[1] = t[1];
		s.erase(8, 2);
		cout << s;
	}
}

// (๑•ᴗ•๑)っ🍊