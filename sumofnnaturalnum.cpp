// CPP Program to find the Average of first
// n natural numbers
#include <bits/stdc++.h>
using namespace std;

// Return the average of first n natural numbers
float avgOfFirstN(int n)
{
    return (float)(1 + n)/2;
}

// Driven Program
int main()
{
    int n = 20;
    cout << avgOfFirstN(n) << endl;
    return 0;
}
