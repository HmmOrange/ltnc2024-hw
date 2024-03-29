/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/cpp-sets/problem
*/

#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;
    for (int i = 1; i <= q; i++){
        int type, x;
        cin >> type >> x;
        if (type == 1) s.insert(x);
        else if (type == 2) s.erase(x);
        else cout << (s.count(x) ? "Yes" : "No") << "\n";
    }
    return 0;
}


// (๑•ᴗ•๑)っ🍊