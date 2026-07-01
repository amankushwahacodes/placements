#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    cout << "Enter number of rows and cols" << endl;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                cout << "1";
            }

            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}
