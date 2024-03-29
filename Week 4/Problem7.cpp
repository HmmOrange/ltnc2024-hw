/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/contests/101hack31/challenges/falling-rocks/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e3 + 5;
int a[N][N], dp[N][N];

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	int n, m;
	cin >> m >> n;
	int posy = 0;
	for (int i = 1; i <= n; i++){
		string s;
		cin >> s;
		for (int j = 1; j <= m; j++){
			a[i][j] = (s[j - 1] == 'E' || s[j - 1] == 'Y');
			if (s[j - 1] == 'Y') posy = j;
		}
	}
	dp[0][posy] = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++)
			if (a[i][j]) dp[i][j] = dp[i - 1][j];
			
		for (int j = 1; j <= m; j++){
			if (dp[i][j] == 1){
				if (a[i][j - 1]) dp[i][j - 1] = (dp[i][j - 1] == 1 ? 1 : 2);
				if (a[i][j + 1]) dp[i][j + 1] = (dp[i][j + 1] == 1 ? 1 : 2);
			}
		}
		for (int j = 1; j <= m; j++){
			dp[i][j] = min(dp[i][j], 1ll);
		}
	}
	
	bool ans = false;
	for (int i = 1; i <= m; i++){
		ans |= dp[n][i];
	}
	cout << (ans ? "YES" : "NO");
}

// (๑•ᴗ•๑)っ🍊