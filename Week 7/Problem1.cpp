/*
	Author: Orange 🍊
	Link: Binary Search - Đệ quy
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 5;
int a[N], n;
int bs(int l, int r, int x){
	if (l > r) return -1;
	
	int mid = l + ((r - l) >> 1);
	
	if (x == a[mid]) 
		return mid;
	
	if (x < a[mid]) 
		return bs(l, mid - 1, x);
	
	return bs(mid + 1, r, x);
}
signed main(){
	cin.tie(0)->sync_with_stdio(0);
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	
	int x;
	cin >> x;
	cout << bs(1, n, x) << "\n";
}

// (๑•ᴗ•๑)っ🍊