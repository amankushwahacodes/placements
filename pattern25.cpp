#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        int limit = 2 * i + 1;
        int mid = (limit + 1)/2;
        for (int j = 1; j < limit; j++)
        {
            if (j % 2 == 0)
                cout << "*" << " ";
            else
                cout << i << " ";
        }
        cout << endl;
    }
}