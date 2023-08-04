#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1692/problem/B

// int main()
// {

//     int t, n, num, res;
//     cin >> t;
//     set<int> s;

//     while (t--)
//     {
//         cin >> n;
//         s.clear();
//         for (int i = 0; i < n; i++)
//         {
//             cin>>num;
//             s.insert(num);
//         }
//         res = s.size();
//         if ((n - res) % 2 == 1)
//         { // 110122  102
//             res--;
//         }
//         cout << res << endl;
//     }

//     return 0;
// }

int main()
{
    //fill(array, array+10, 0);
    //memset(array, 0, sizeof(array));
    // OR
    //memset(array, 0, N*sizeof(*array));
    //int array[10] = {0};

    int t, n, c,num;
    cin >> t;

    while (t--)
    {
        int* arr=new int[1000000]; //initialized with 0
        c=0;
        //each time the loop iterates, the previous instance of the array is destroyed, and a new one is created, not like the static array
        cin >> n;
        for(int i=0;i<n;i++){
            cin>>num;
            arr[num]++;
        }
        for(int i=0;i<1000000;i++){
            if(arr[i]!=0){
                c++;
            }
        }
        if((n-c)%2==1){
            c--;
        }
        cout<<c<<endl;

    }

    return 0;
}