#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 11001;    
    int dec = 0;
    int power = 0;

    while (n != 0)
    {

        dec = dec + ((n % 10) * pow(2,power++));

        n /= 10;

  
    }

    cout << dec;
}
