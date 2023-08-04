#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1791/problem/C

int main(){

int t,n,ans;
string s;
cin>>t;

while(t--){
cin>>n;
cin>>s;
ans=n;
for(int i=0,j=n-1;i<n/2;i++,j--){
if((s[i]=='0'&& s[j]=='1') ||(s[i]=='1' && s[j]=='0')){
ans-=2;
}
else{
    break;
}
}
cout<<ans<<endl;
}

return 0;
}