#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1850/problem/B

int main(){
int t,n,a,b,bmax=0,winner;
cin>>t;

while(t--){
    bmax=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(a<=10){
            if(b>bmax){
                bmax=b;
                winner=i;
            }
        }
    }
    cout<<winner<<endl;
}

return 0;
}