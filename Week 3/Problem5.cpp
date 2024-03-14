/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		string t = "hackerrank";
		int pos = 0;
		for (auto i: s){
			if (pos < 10 && i == t[pos]) pos++;
		}
		cout << (pos == 10 ? "YES" : "NO") << "\n";
	}
}

// (๑•ᴗ•๑)っ🍊