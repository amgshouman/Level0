#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1829/problem/B

int main(){

int t,n,x,c,maxNum;
cin>>t;
while(t--){
    cin>>n;
    c=0; 
    maxNum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            c++;
            maxNum=max(maxNum,c);
        }
        else{
            c=0;
        }
    }
    cout<<maxNum<<endl;
}

return 0;
}