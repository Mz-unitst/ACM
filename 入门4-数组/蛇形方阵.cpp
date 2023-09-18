#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>

#define M 1000005
#define N 1000005
#define ll long long

using namespace std;
int a[11][11];
int main()
{
   int n;
    cin>>n;
    
    int u=1;
    int i=1,j=1;
    a[1][1]=1;
    while(u<=n*n-1){
        while(j+1<=n && a[i][j+1]==0){
            j++;
            u++;
            a[i][j]=u;
        }
        while(i+1<=n && a[i+1][j]==0){
            i++;
            u++;
            a[i][j]=u;
        }
        while(j-1>=1 && a[i][j-1]==0){
            j--;
            u++;
            a[i][j]=u;
            
            
        }
        while(i-1>=1 && a[i-1][j]==0){
            i--;
            u++;
            a[i][j]=u;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%3d",a[i][j]);
            // cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}
