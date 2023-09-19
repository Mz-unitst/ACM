#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[25][25];
   for(int i=1;i<=n;i++){
    a[i][1]=1;
    a[i][i]=1;    
   }
   for(int i=2;i<=n;i++){
    for(int j=2;j<i;j++){
        a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
   }
   for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<a[i][i]<<endl;
   }
   return 0;
}
