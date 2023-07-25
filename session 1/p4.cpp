#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1829/problem/A

int main(){

int t,c;
string s,code="codeforces";
cin>>t;
while(t--){
    c=0;
cin>>s;
for(int i=0;i<10;i++){
    if(s[i]!=code[i]){
        c++;
    }
}
cout<<c<<endl;
}

return 0;
}