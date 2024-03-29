/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    while (q--){
        int x;
        cin >> x;
        int f = lower_bound(v.begin(), v.end(), x) - v.begin();
        if (v[f] == x) cout << "Yes";
        else cout << "No";
        
        cout << " " << f + 1 << "\n";
    }
}

// (๑•ᴗ•๑)っ🍊