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

int main(){
	int n;
	int maxx=-1,minn=11,s=0,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		s+=t;
		maxx=max(maxx,t);
		minn=min(minn,t);
	}
	return 0;
}
