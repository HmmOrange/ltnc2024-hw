/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/staircase/problem
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--){
		for (int j = 1; j < i; j++) cout << " ";
		for (int j = i; j <= n; j++) cout << "#";
		cout << "\n";
	}
}

// (๑•ᴗ•๑)っ🍊