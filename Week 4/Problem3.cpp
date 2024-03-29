/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/palindrome-index/problem
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

bool is_palindrome(string s, int i){
    s.erase(i, 1);
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        bool kt = true;
        for (int i = 0; i < s.length(); i++){
            if (s[i] != s[s.length() - i - 1]){
                if (is_palindrome(s, i)){
                    kt = false;
                    cout << i << "\n";
                }
                else if (is_palindrome(s, s.length() - i - 1)){
                    kt = false;
                    cout << s.length() - i - 1 << "\n";
                }
                break;
            }
        }
        if (kt) cout << -1 << "\n";
    }
}

// (๑•ᴗ•๑)っ🍊