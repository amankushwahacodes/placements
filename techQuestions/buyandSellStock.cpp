#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {7, 6, 4, 3, 1};

    // int maxProfit = INT_MIN;

    // for(int i =0 ; i< arr.size();i++){
    //     int currProfit = 0;
    //     for (int j = i+1 ; j < arr.size();j++){

    //         if(arr[j]>arr[i]){
    //             currProfit = max(arr[j]-arr[i],currProfit);
    //         }
    //     }
    //     maxProfit = max(currProfit,maxProfit);
    // }

    // cout << maxProfit;

    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int price : arr){

        minPrice = min(minPrice , price);
        maxProfit = max(maxProfit, price-minPrice);

    }

    cout << maxProfit;
}