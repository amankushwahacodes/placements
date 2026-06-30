#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;

    // 1
    // 212
    // 32123
    // 4321234

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j > 1; j--)
        {

            cout << j << " ";
        }

        for (int j = 1 ; j <= i ; j++){
            cout << j << " ";
        }


        cout << endl;
    }
}