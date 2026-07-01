#include <bits/stdc++.h>
using namespace std;

int main (){

    int n = 5;


    for(int i = 0 ; i <= 5  ; i++){
        for (int k = 0; k < n- i + 1 ; k++)
        {
            cout << " ";
        }

        for (int j = i ; j>= 0  ; j--){
            cout << j ;
        }

        for (int k = 1 ; k <= i ; k++){
            cout << k ;
        }

        cout << endl;
    }

}