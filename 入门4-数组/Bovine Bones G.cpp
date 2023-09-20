#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
int a[101];
int main()
{
   int x,y,z;
   
   cin>>x>>y>>z;
   for(int i=1;i<=x;i++){
      for(int j=1;j<=y;j++){
         for(int k=1;k<=z;k++){
            a[i+j+k]++;
         }
      }
   }
   int maxx=0,u=0;
   for(int i=1;i<=100;i++){
      if(a[i]>maxx)
         {
            maxx=a[i];
            u=i;
         }
   }
   cout<<u<<endl;
   return 0;
}
