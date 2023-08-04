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
// BY USING CHAR ARRAY

// int main()
// {
//     int t,index;
//     char line[9],word[9];
//     cin >> t;
//     while (t--)
//     {
//         fill(word, word + 9, '\0');
//         index=0;
//         for (int i = 0; i < 8; i++)
//         {
//             for(int z=0;z<8;z++){
//                 cin>>line[z];
//             }
//             for (int j = 0; j < 8; j++)
//             {
//                 if(line[j]!='.'){
//                     word[index]=line[j];
//                     index++;
//                 }
//             }
//         }
//         cout<<word<<endl;
//     }
//     return 0;
// }