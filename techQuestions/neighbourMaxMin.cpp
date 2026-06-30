#include <bits/stdc++.h>

using namespace std;

int main()
{
   

    vector<int> arr = {20, -25, 1, -14, 18, 37, 31};
    // vector<int> arr = {10, 20, 15, 2, 23, 90, 67};

    int maxSum = INT_MIN;
    int minSum = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int highestNeighbourSum = 0;
        int lowestNeighbourSum = 0;
        if(i==0) {
            highestNeighbourSum = arr[i+1];
            lowestNeighbourSum = arr[i+1];
        }

        else if (i== (arr.size()-1)){
            highestNeighbourSum = arr[i-1];
            lowestNeighbourSum = arr[i-1];
        }

        else {
            highestNeighbourSum = arr[i-1] + arr[i+1];
            lowestNeighbourSum = arr[i - 1] + arr[i + 1];
        }

        maxSum = max(highestNeighbourSum,maxSum);
        minSum = min(lowestNeighbourSum,minSum);
    }

    cout << maxSum << " " <<  minSum;

    return 0;
}