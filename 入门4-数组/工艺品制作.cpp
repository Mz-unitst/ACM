#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#define M 1000005
#define N 1000005
#define ll long long
using namespace std;

inline int read(){//快速读入  386-->210ms
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=(x<<1)+(x<<3)+(c^48);
		c=getchar();
	} 
	return x*f;
}
int a[25][25][25];
int main(){
	int w,x,h;
	cin>>w>>x>>h;
	int q;
	cin>>q;
	int x1,x2,y1,y2,z1,z2;
	int res=0;
	memset(a,0,sizeof(a));
	for(int i=0;i<q;i++){
			cin>>x1>>y1>>z1>>x2>>y2>>z2;
			for(int j=x1;j<=x2;j++){
				for(int k=y1;k<=y2;k++){
					for(int l=z1;l<=z2;l++){
						a[j][k][l]=1;
					}
				}
			}
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=h;k++){
				if(a[i][j][k]==0){
					// cout<<i<<" "<<j<<" "<<k<<endl;
					++res;
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
