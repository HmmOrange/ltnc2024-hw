/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/contests/101hack31/challenges/naughty-number/submissions
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1, x; i <= n; i++) cin >> x, mp[x]++;
    for (int i = 1, x; i <= n + 1; i++) cin >> x, mp[x]--;
    for (int i = 1; i <= 100; i++) if (mp[i] == -1) return cout << i, 0;
}


// (๑•ᴗ•๑)っ🍊