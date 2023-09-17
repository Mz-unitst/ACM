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
	int s,v;
	cin>>s>>v;
	double t;
	t=1.0*s/v+10.0;
//	cout<<t;
	t=ceil(t);
	int h,m;
//	cout<<t;
	if(t<480){
		int res=480-t;
		h=res/60;
		m=res -  60*h;
		//	cout<<h<<m;
		if (m<=9){
			printf("0%d:0%d",h,m);
		}
		else{
			printf("0%d:%d",h,m);
		}
	}
	else{
		int res=480+24*60-t;
		h=res/60;
		m=res -  60*h;
		//	cout<<h<<m;
		if (m<=9){
			printf("%d:0%d",h,m);
		}
		else{
			printf("%d:%d",h,m);
		}
	}
	
	return 0;
}
