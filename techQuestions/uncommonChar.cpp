#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 , s2;
    cin >> s1 >> s2 ;


    set<char> set1,set2;



    for (char ch: s1){
        set1.insert(ch);
    }
    for (char ch : s2)
    {
        set2.insert(ch);
    }


    for (char i = 'a'; i <= 'z'; i++)
    {
        if(set1.count(i)!=set2.count(i)) cout << i;        
    }

}