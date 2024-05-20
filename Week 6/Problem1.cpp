/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/c-tutorial-struct/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string first;
    string last;
    int val;
} a;
int main() {
    cin >> a.age >> a.first >> a.last >> a.val;
    cout << a.age << " " << a.first << " " << a.last << " " << a.val;
}


// (๑•ᴗ•๑)っ🍊