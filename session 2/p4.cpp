#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1742/problem/B

// int main(){
//     int t,n,num;
//     set<int> s;
//     cin >> t;
//     while (t--)
//     {
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cin>>num;
//             s.insert(num);
//         }
//         if(s.size()==n){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }

// return 0;
// }


//another solution
int main(){
    int t,n,num;
    bool f;
    cin >> t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        f=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                f=true;
                break;
            }
        }
        f?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }

return 0;
}
