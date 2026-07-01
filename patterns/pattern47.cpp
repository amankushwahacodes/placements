#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows" << endl;
    cin >> m;
    

    for (int i = 0 ; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(j+65) << " ";
        }
        cout << endl;
    }
    return 0;
}
