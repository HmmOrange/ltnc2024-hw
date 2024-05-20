/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/the-power-sum/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
int power(int x, int n){
	if (n == 1) return x;
	return x * power(x, n - 1);
}

int ans[1005][11][1005];

int powerSum(int x, int n, int m = 0){
	if (ans[x][n][m] != -1)
		return ans[x][n][m];
		
	if (x == 0) 
		return ans[x][n][m] = 1;
	
	int &res = ans[x][n][m];
	res = 0;
	
	for (int i = m + 1; i <= 100; i++){
		int tmp = power(i, n);
		if (x >= tmp){
			res += powerSum(x - tmp, n, i);
		}
		else break;
	}
	
	return res;
}

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	memset(ans, -1, sizeof ans);
	int x, n;
	cin >> x >> n;
	cout << powerSum(x, n) << "\n";
}

// (๑•ᴗ•๑)っ🍊