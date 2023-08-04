#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1791/problem/A

int main()
{
    int t;
    char c;
    bool f;
    string s = "codefrs";
    cin >> t;
    while (t--)
    {
        cin >> c;
        f = false;
        for (int i = 0; i < 7; i++)
        {
            if (c == s[i])
            {
                f = true;
            }
        }
        f ? cout << "YES" << endl : cout << "NO"<<endl;
    }

    return 0;
}