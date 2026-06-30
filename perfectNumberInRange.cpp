#include <bits/stdc++.h>
using namespace std;
int main (){
    int st , end ;
    // cin >> st >> end;

    st = 1 , end = 50;


    for (int i = st ; i <= end ; i++ ){
        int sumFactor = 0;
        for(int j = 1 ; j < i ; j++ ){
            if(i%j==0){
                sumFactor += j;
            }
        }
        // cout << sumFactor << " " << i << endl;

        if(i==sumFactor){
            cout << i << " ";
        } 
    }
}