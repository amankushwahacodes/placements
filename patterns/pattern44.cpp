#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows" << endl;
    cin >> m;

    for (int i = 5; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << char(j + 64) << ' ';
        }
        cout << endl;
    }
    return 0;
}
