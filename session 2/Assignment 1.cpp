#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1800/problem/A

int main()
{
    int t, i, n,f=0;
    string s,res;
    cin >> t;

    while (t--)
    {
        res="";
        cin>>n;
        cin >> s;
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }
        res+=s[0];
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                res+=s[i];
            }
        }
        if(res=="meow"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1800/problem/A

int main()
{
    int t, n;
    string s,res;
    cin >> t;

    while (t--)
    {
        bool f1=0,f2=0,f3=0,f4=0;
        res="";
        cin>>n;
        cin >> s;
        int index=0;
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }

while(index<n && s[index]=='m'){
index++;
f1=1;
}
while(index<n && s[index]=='e'){
index++;
f2=1;
}
while(index<n && s[index]=='o'){
index++;
f3=1;
}
while(index<n && s[index]=='w'){
index++;
f4=1;
}
        if(index==n && f1 && f2 && f3 && f4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

*/
