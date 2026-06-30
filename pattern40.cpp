#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    if (n <= 0)
        return 1;
    int fact = 1;
    while (n >= 1)
    {
        fact = fact * n--;
    }
    return fact;
}

int combination(int i, int j)
{

    return factorial(i) / (factorial(j) * factorial(i - j));
}

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << combination(i - 1, j - 1) << " ";
        }
        cout << endl ;
    }
}