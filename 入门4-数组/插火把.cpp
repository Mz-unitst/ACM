#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
int a[105][105];

int main()
{
   int n,m,k;
   cin>>n>>m>>k;
   int x,y;
   for(int i=1;i<=m;i++){
    cin>>x>>y;
    for(int j=-1;j<=1;j++){
        for(int k=-1;k<=1;k++){
            a[x+j][y+k]=1;
        }
    }
    for(int j=-2;j<=2;j++){
        if(x+j>=1&&x+j<=n){
            a[x+j][y]=1;
        }
        if(y+j>=1&&y+j<=n){
            a[x][y+j]=1;
        }
    }
   }
   for(int i=1;i<=k;i++){
    cin>>x>>y;
    for(int j=-2;j<=2;j++){
        for(int k=-2;k<=2;k++){
            if(x+j>=1&&x+j<=n&&y+k>=1&&y+k<=n){
                a[x+j][y+k]=1;
            }
        }
    }
   }
   int res=0;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        res+=a[i][j];
    }
   }
   cout<<n*n-res<<endl;
   
   return 0;
}
