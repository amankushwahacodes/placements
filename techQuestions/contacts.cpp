#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Number of operations : ";

    cin >> n;

    vector<string> contacts;

    while (n > 0)
    {
        string op, str;
        cin >> op >> str;

        if (op == "add")
        {
            contacts.push_back(str);
        }

        else if (op == "find")
        {
            int count = 0;

            for (string name : contacts)
            {
                if (name.substr(0, str.length()) == str)
                {
                    count++;
                }
            }

            cout << "Count : " << count << endl;
        }
        n--;
    }

    return 0;
}
