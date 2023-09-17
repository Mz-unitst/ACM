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
int gcd(int a,int b){
	if (a>b) swap(a,b);
	if (a==0){
		return b;
	}
	int c=b % a;
	return gcd(c,a);
}
int main(){
	int n;
	int a,b,c;
	cin>>a>>b>>c;
	int minn,maxx;
	minn=min(min(a,b),c);
	maxx=max(max(a,b),c);
	
	int g=gcd(minn,maxx);
	cout<<minn/g<<"/"<<maxx/g;
	return 0;
}
