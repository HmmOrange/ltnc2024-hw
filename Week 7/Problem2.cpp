/*
	Author: Orange 🍊
	Link: 
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;
int n = 3, m = 4;
char c[] = {'a', 'b', 'c', 'd'};
string s = "";
void ql(int x){
	if (x > n){
		cout << s << "\n";
		return;
	}
	for (int i = 1; i <= m; i++){
		s.push_back(c[i - 1]);
		ql(x + 1);
		s.pop_back();
	}
}
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	ql(1);
}

// (๑•ᴗ•๑)っ🍊