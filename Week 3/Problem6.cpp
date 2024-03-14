/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/caesar-cipher-1/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    string s;
    cin >> n >> s >> k;
    k %= 26;
    for (auto &c: s){
        int i = c;
        if (!('a' <= i && i <= 'z') && !('A' <= i && i <= 'Z')) continue;
        i += k;
        if ('a' <= i - k && i - k <= 'z' && i > 'z') i -= 26;
        else if ('A' <= i - k && i - k <= 'Z' && i > 'Z') i -= 26;
        c = i;
    }
    cout << s;
}


// (๑•ᴗ•๑)っ🍊