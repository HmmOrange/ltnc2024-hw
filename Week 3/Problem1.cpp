/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	string a, b;
	cin >> a >> b;
	cout << a.size() << " " << b.size() << "\n";
	cout << a + b << "\n";
	swap(a[0], b[0]);
	cout << a << " " << b;
}

// (๑•ᴗ•๑)っ🍊