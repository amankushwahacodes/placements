#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> numbers = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    vector<int> alterNumb(numbers.size());


    int posIndex = 0;
    int negIndex = 1;


    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] >= 0)
        {
            alterNumb[posIndex] = numbers[i];
            posIndex+=2;
            
        }
        else {
            alterNumb[negIndex] = numbers[i];
            negIndex += 2;
        }
    }

    for (int num : alterNumb)
    {
        cout << num << " ";
    }
}