/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/arrays-introduction/problem
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
    while (cin >> n) v.push_back(n);
    reverse(v.begin(), v.end());
    for (auto i: v) cout << i << " ";
    return 0;
}


// (๑•ᴗ•๑)っ🍊