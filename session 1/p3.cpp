#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1850/problem/C

int main(){

int t;
string word,line;
cin>>t;
while(t--){
for(int i=0;i<8;i++){
    cin>>line; // ...i....
    for(int j=0;j<8;j++){
        if(line[j]!='.'){
            word=word+line[j];
        }
    }
}
    cout<<word<<endl;
    word="";
}


return 0;
}