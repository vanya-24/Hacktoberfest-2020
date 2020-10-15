#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define  FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FIO;
    string s;
    string search;
    search="hello";
    cin>>s;
    int n = s.size();
    int i,j; 
    j=0;
         for(i=0;i<n;i++){
             if(s[i]==search[j]){
                 j++;
        }
        if(j==5){
                  break;
             }
}
         if(j==5){
             cout<<"YES";
         }
         else
         cout<<"NO";
     
   
    return 0;
}
 