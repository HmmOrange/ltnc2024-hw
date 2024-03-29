/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/equality-in-a-array/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    map<int, int> mp;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        int x; cin >> x; ans = max(ans, ++mp[x]);
    }
    
    cout << n - ans;
}

// (๑•ᴗ•๑)っ🍊