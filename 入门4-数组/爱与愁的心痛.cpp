#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
int a[3005];
int main()
{
   int n,m,res,minn;
   cin>>n>>m;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   minn=0x3f3f3f3f;
   for(int i=0;i+m-1<n;i++){
    res=0;
    for(int j=i;j<i+m;j++){
        res+=a[j];
    }
    minn=min(res,minn);
   }
   cout<<minn<<endl;
   return 0;
}
