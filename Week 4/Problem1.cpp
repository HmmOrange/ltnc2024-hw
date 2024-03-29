/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/drawing-book/problem
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, p, try1, try2;
    cin >> n >> p;
    if (p % 2 == 1) try1 = (p - 1)/2;
    else try1 = p/2;
    if ((p - n) % 2 == 0) try2 = -(p - n)/2;
    else{
        if (n % 2 == 0) try2 = -(p - (n + 1))/2;
        else try2 = -(p + 1 - n)/2;
    }
    cout << (try1 > try2 ? try2 : try1) << endl;
}


// (๑•ᴗ•๑)っ🍊