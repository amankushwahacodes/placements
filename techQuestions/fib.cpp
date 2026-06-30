#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter n ";

    cin >> n;

    int a = 0;
    int b = 1;
    int fib = 0;

    vector<int> fibarr;

    while (n--)
    {
        cout << a << endl;
        fibarr.push_back(a);

        fib = a + b;
        a = b;
        b = fib;
    }

    cout << "reverse" << endl;

    int size = fibarr.size();
    int sumEven = 0;

    while (size--)
    {

        cout << fibarr[size] << endl;
    }

    int sumOdd = 0;

    for (int i = 1; i < fibarr.size(); i += 2)
    {
        sumOdd += fibarr[i];
    }

    for (int i = fibarr.size() - 1, revIndex = 0; i >= 0; i--, revIndex++)
    {
        if (revIndex % 2 == 0)
            sumEven += fibarr[i];
    }

    cout << "sumOdd : " << sumOdd << endl;
    cout << "sumEven : " << sumEven << endl;
}
