#include <bits/stdc++.h>
using namespace std;

int main (){

    int n = 5;


    for(int i = 1 ; i <= n  ; i++){
        for (int k = n; k >= 1 ; k--)
        {
            if(i==k ) cout << "*";
            else cout << k;
        }


        cout << endl;
    }

}