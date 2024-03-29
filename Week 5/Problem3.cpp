/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/vector-sort/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a;
    cin >> a;
    v.erase(v.begin() + a - 1);
    int b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << "\n";
    for (auto i: v) cout << i << " ";
}

// (๑•ᴗ•๑)っ🍊