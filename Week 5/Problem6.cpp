/*
	Author: Orange 🍊
	Link: 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> mp;
    int q;
    cin >> q;
    while (q--){
        int type;
        cin >> type;
        string x;
        int y;
        if (type == 1){
            cin >> x >> y;
            mp[x] += y;
        }
        else if (type == 2){
            cin >> x;
            mp[x] = 0;
        }
        else{
            cin >> x;
            cout << mp[x] << "\n";
        }
    }
}


// (๑•ᴗ•๑)っ🍊