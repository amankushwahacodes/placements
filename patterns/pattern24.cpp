

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << "*" << " ";
            else
                cout << i << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            if (j % 2 == 0)
                cout << "*" << " ";
            else
                cout << n - i + 1 << " ";
        }
        cout << endl;
    }
}