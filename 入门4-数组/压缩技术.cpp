#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
int a[205][205];
int main()
{
    memset(a,-1,sizeof(a));
   int n;
   cin>>n;
   int i=0,j=0,f=0,u=0;
   int x;
   while(cin>>x && u<n*n){
        while(x){
            a[i][j]=f;
            x--;
            j++;
            i+=j/n;
            j%=n;
            u++;
        }
        // a[i][j]=f;
        f=1-f;
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)cout<<a[i][j];
    cout<<endl;
   }
   return 0;
}
