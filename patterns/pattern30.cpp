#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            int print = j + i -1;
            cout << print << " ";
        }

        for (int j = i-1 ; j >= 1 ; j--){
            cout << j << " ";
        }

        cout << endl;
    }
}