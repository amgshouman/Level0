#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1791/problem/B

string checkCandy(string s,int n){

    int x=0,y=0;

 for (int i = 0; i < n; i++) {
    if(s[i]=='U'){
        y++;
    }
    else if(s[i]=='R'){
        x++;
    }
    else if(s[i]=='D'){
        y--;
    }
    else{
        x--;
    }
    
    if(x==1 && y==1){
        return "YES";
    }
 }
    return "NO";
}

int main(){
int t,n;
string s;
cin>>t;

while(t--){
cin>>n;
cin>>s;

//by using function
cout<<checkCandy(s,n)<<endl;

}

return 0;
}