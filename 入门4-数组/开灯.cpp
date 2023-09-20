#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
bool f[2000005];
int main()
{
   int n,t;
   double a;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a>>t;
    for(int i=1;i<=t;i++)
    f[(int)(a*i)]=1- f[(int)(a*i)];
   }
   for(int i=0;i<2e6+5;i++)
    if(f[i]){
        cout<<i;
        return 0;
    }
    // cout<<-1;
   return 0;
}
