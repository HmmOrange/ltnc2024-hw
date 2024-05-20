/*
	Author: Orange 🍊
	Link: https://www.hackerrank.com/challenges/c-tutorial-class/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        Student();
        int age;
        string first;
        string last;
        int val;
};

Student::Student(){}

int main() {
    Student a;
    cin >> a.age >> a.first >> a.last >> a.val;
    cout << a.age << "\n" << a.last << ", " << a.first << "\n" << a.val << "\n\n";
    cout << a.age << "," << a.first << "," << a.last << "," << a.val;
}


// (๑•ᴗ•๑)っ🍊