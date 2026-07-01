#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;


    for (int i = 0; i < n; i++)
    {
        
        for (int j = n - i; j < n; j++)
        {
            if(i == j ) cout << "0" << " ";
            else cout << j << " ";
        }

        cout << 0 << " ";

        int countNo = 0;
        for (int j = n - 1; j >= 1 && countNo < i; j--)
        {
            cout << j << " ";
            countNo ++;
        }

        cout << endl;
    }
    return 0;
}