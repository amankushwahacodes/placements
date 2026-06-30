#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bin = 0;
    int place = 1;

    while(n!=0){
        bin = bin + n%2 * place ;
        place *=10;
        n/=2;
    }

    cout << bin;
}