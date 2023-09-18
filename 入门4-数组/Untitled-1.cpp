#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include<bits/stdc++.h>

#define M 200005
#define N 200005
#define ll long long

using namespace std;
long long a[N],dp[N];
int main()
{
   int n;
   cin>>n;

   for(int i=0;i<n;i++)cin>>a[i];
   dp[0]=a[0];
   for(int i=1;i<n;i++){
    dp[i]=max(dp[i-1]+a[i],a[i]);
   }
    long long res=dp[0];
    for(int i=1;i<n;i++){
        res=max(res,dp[i]);
    }
    cout<<res<<endl;
   return 0;
}
