/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, q; cin >> n >> q;
    vector<vector<int>> v(n, vector<int>());
    for (int i = 0; i < n; i++){
        int m; cin >> m;
        v[i].resize(m);
        for (int j = 0; j < m; j++) cin >> v[i][j];
    }
    while (q--){
        int x, y; cin >> x >> y;
        cout << v[x][y] << "\n";
    }
}

// (๑•ᴗ•๑)っ🍊