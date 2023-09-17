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
	double a,b,c;
	cin>>a>>b>>c;
	double res,p;
	p=(a+b+c)/2.0;
	res=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1f\n",res);
	return 0;
}
