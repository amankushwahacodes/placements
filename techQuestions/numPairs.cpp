#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {1,5,7,1,4,6,2,3};
    int k = 8;

    int count = 0;
    for (int i = 0 ; i < arr.size();i++){
        for (int j = i+1 ; j < arr.size();j++){
            if(arr[i]+arr[j]==k)count ++;
        }
    }

    cout << count;



}