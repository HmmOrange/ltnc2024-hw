/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
int a[N], b[N];

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; i++) cin >> b[i];
    
    int cnt = 0;
    for (int i = 1; i <= 100; i++){
        bool kt = true;
        for (int j = 1; j <= n; j++) kt &= !(i % a[j]);
        for (int j = 1; j <= m; j++) kt &= !(b[j] % i);
        
        cnt += kt;
    }
    cout << cnt << "\n";
}

// (๑•ᴗ•๑)っ🍊