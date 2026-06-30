#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    string cleanedStr;

    for(char ch : str){
        if(isalnum(ch)){
            cleanedStr.push_back(tolower(ch));
        }
    }

    int i = 0;
    int j = cleanedStr.size() - 1;

    string reversed = cleanedStr;

    while (i < j)
    {
        swap(reversed[i++], reversed[j--]);
    }

    if(reversed == cleanedStr) cout << "palindrome";

}