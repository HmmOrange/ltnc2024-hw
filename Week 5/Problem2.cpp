/*
	Author: Orange 🍊
	Link: 
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
    while (n--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto i: v) cout << i << " ";
}


// (๑•ᴗ•๑)っ🍊