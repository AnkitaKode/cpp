#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str;
    int t = 4;
    while (t--)
    {
        getline(cin, str);

        while (str.length() == 0)
            getline(cin, str);

        cout << str << " : newline" << endl;
    }
    return 0;
}
