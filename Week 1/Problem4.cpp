/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

const string a[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "greater than nine"};

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    cout << a[max(n - 1, 10)];

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

// (๑•ᴗ•๑)っ🍊