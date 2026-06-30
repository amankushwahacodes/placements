#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows" << endl;
    cin >> m;
    int a = 1;
    int b = 1;
    int fib = a + b;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            a = b;
            b = fib;
            fib = a + b;
        }
        cout << endl;
    }
    return 0;
}
