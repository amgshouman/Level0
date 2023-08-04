#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1676/problem/B

int main(){

int t,n,minNum,c;
cin>>t;

while(t--){
    cin>>n;
    int arr[n];
    c=0;
    cin>>arr[0];
    minNum=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        minNum=min(minNum,arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=minNum)
            c+=(arr[i]-minNum);
    }
    cout<<c<<endl;
}

return 0;
}