#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows" << endl;
    cin >> m;   

    // 5
    // 4 5
    // 3 4 5
    // 2 3 4 5
    // 1 2 3 4 5

    int a = 64 + m;

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //        int k = m- i + j + 64;
    //        cout << char(k) << " ";
    //     }
    //     cout << endl;
    // }


    for (int i = 5 ; i > 0 ; i--){
        for (int j = i ; j <= 5 ; j++){
            cout << char(j + 64 )<< ' ';
        }
        cout << endl;
    }
    return 0;
}
