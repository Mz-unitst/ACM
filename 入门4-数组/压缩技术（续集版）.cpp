#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
int a[50000];
int main()
{
   int n;
   string s[205];
   int u=0,index=0;
   while(cin>>s[u]){
    n=s[0].size();
    for(int i=0;i<n;i++){
        a[index]=s[u][i]-'0';
        index++;
    }
    ++u;
   }
   cout<<n;
   int res=1;
   if(a[0]==1){
    cout<<" 0";
   }
   for(int i=0;i<index;i++){
        if(a[i]==a[i+1]){
            if(i==index-1){
                cout<<" "<<res;
                return 0;
            }
            res++;
        }
        else{
            cout<<" "<<res;
            res=1;
        }
   }
//    if(a[index-1]==a[index-2]){
//     cout<<" "<<res-1;
//    }

   return 0;
}
