#include<bits/stdc++.h>
using namespace std;
#define  FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void SieveOfEratosthenes(int);  
int main()
{
    FIO;
    int n,i;
    cin>>n;
   for(i=1;i<n+1;i++){
       cout<<n*2+i<<" ";
   }
return 0;
}