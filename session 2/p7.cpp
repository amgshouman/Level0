#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/263/A

int main(){
int num;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>num;
        if(num){
            cout<<abs(i-3)+abs(j-3)<<endl;
            return 0;
        }
    }
}
return 0;
}