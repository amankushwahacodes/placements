#include <bits/stdc++.h>
using namespace std;

int main (){

    int n = 4;


    for(int i = 1 ; i <= n  ; i++){
        for (int k = 1; k <= n- i + 1 ; k++)
        {
            cout << k;
        }

        for (int k = 2 ; k < 2 * i; k++)
        {
            cout << "*";
        }

        for (int j = n-i+1 ; j>= 1  ; j--){
            cout << j ;
        }

        cout << endl;
    }

}