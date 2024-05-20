/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/classes-objects/problem
*/

#include <bits/stdc++.h>
using namespace std;

int input(){
	int s = 0;
	for (int i = 1; i <= 5; i++){
		int x; cin >> x; s += x;
	}
	return s;
};

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int n, cnt = 0;
	cin >> n;
	int x = input();
	while (--n){
		int y = input();
		cnt += (y > x);
	}
	cout << cnt;
}


// (๑•ᴗ•๑)っ🍊