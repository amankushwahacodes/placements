#include <bits/stdc++.h>
using namespace std;

int main (){

    int n = 5;


    for(int i = 0 ; i < 2 * n -1  ; i++){
        for (int k = 1; k < n- i && i < n ; k++)
        {
            cout << " ";
        }

        for (int j = 0 ; j<= i && i < n  ; j++){
            cout << "*";
        }


        for (int k = 0; k < i- n+ 1  && i >= n; k++)
        {
            cout << " ";
        }

        for (int k = 1; k < 2 *n - i && i >=n; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

}