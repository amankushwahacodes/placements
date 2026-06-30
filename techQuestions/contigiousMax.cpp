#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };

    int sum = 0;
    int maxSum = INT_MIN;


    int start = 0;
    int stIndex = 0 ;
    int endIndex = 0;

    for (int i = 0 ; i < nums.size(); i++){


        sum += nums[i];

        if(sum > maxSum){
            stIndex = start;
            maxSum = sum;
            endIndex = i;

        }

        if(sum<0){
            sum = 0;
            start = i+1;
        }
    }

    // cout << maxSum;
    // cout << stIndex << endIndex;


    for (int i = stIndex ; i <= endIndex ; i++){
        cout << nums[i] << " ";
    }

}