/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/camelcase/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	string s;
	cin >> s;
	int cnt = 0;
	for (auto i: s) if ('A' <= i && i <= 'Z') cnt++;
	cout << cnt + 1;
}

// (๑•ᴗ•๑)っ🍊