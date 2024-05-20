/*
	Author: Orange 🍊
	Link: 
*/

#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;

const int n = 10;

char a[n + 1][n + 1];
char ans[n + 1][n + 1];

vector<pii> s;
vector<pii> e;
vector<string> words;

bool check(){
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			ans[i][j] = a[i][j];
		}
	}
	
	for (int k = 0; k < (int)words.size(); k++){
		if ((e[k].first - s[k].first) + (e[k].second - s[k].second) + 1 != words[k].length()) 
			return false;
		
		int idx = 0;
		for (int i = s[k].first; i <= e[k].first; i++){
			for (int j = s[k].second; j <= e[k].second; j++){
				if (ans[i][j] == '-')
					ans[i][j] = words[k][idx];
				else if (ans[i][j] != words[k][idx])
					return false;
					
				idx++;
			}
		}
	}
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (ans[i][j] == '-')
				return false;
		}
	}
	
	return true;
}

signed main(){
	cin.tie(0)->sync_with_stdio(0);
	for (int i = 1; i <= n; i++){
		string s;
		cin >> s;
		for (int j = 1; j <= n; j++){
			a[i][j] = s[j - 1];
		}
	}
	
	cin.ignore();
	
	string word;
	while (getline(cin, word, ';')){
		words.push_back(word);
	}
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (a[i][j] == '-' && (j == 1 || a[i][j - 1] == '+') && (j != n && a[i][j + 1] != '+')) 
				s.push_back({i, j});
			if (a[i][j] == '-' && (j == n || a[i][j + 1] == '+') && (j != 1 && a[i][j - 1] != '+'))
				e.push_back({i, j});
		}
	}
	
	for (int j = 1; j <= n; j++){
		for (int i = 1; i <= n; i++){
			if (a[i][j] == '-' && (i == 1 || a[i - 1][j] == '+') && (i != n && a[i + 1][j] != '+')) 
				s.push_back({i, j});
			if (a[i][j] == '-' && (i == n || a[i + 1][j] == '+') && (i != 1 && a[i - 1][j] != '+'))
				e.push_back({i, j});
		}
	}
	
	sort(words.begin(), words.end());
	do{
		if (check()){
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					cout << ans[i][j];
				}
				cout << "\n";
			}
		}
	}
	while (next_permutation(words.begin(), words.end()));
	
}

// (๑•ᴗ•๑)っ🍊