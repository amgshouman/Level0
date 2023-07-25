#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1807/problem/B

int main()
{

    int t, n, sumOdd, sumEven, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sumEven = 0;
        sumOdd = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            if (num % 2 == 0)
            {
                sumEven += num;
            }
            else
            {
                sumOdd += num;
            }
        }
        if (sumEven > sumOdd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}