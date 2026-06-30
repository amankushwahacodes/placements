#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows" << endl;
    cin >> m;

    // 5 4 3 2 1
    // 5 4 3 2
    // 5 4 3
    // 5 4
    // 5

    for (int i = 1; i <= 5; i++)
    {
        for (int j = m; j >= i; j--)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}
