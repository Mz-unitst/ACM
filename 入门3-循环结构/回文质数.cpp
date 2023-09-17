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

int pd(int x){
	int maxx=ceil(sqrt(x));
	for(int i=2;i<=maxx;i++){
		if(x % i ==0){
			return 0;
		}
	}
	cout<<x<<endl;
	return 1;
}
int c[4];

int main(){
//	pd(15901);
//	return 0;
	int n;
	int a,b;
	a=1;
	b=1e8;
	cin>>a>>b;
	int s;
//1位
	for(int i=2;i<=9;i++){
		c[3]=i % 10;
		s=c[3];
//		for(int j=0;j<4;j++)cout<<c[j]<<" ";
//		cout<<s<<endl;
		if (s >=a && s <= b){
			pd(s);
		}
	}
	for(int i=1;i<=9;i++){
		c[3]=i % 10;
		s=c[3]*11;
//		for(int j=0;j<4;j++)cout<<c[j]<<" ";
//		cout<<s<<endl;	
		if (s >=a && s <= b){
			pd(s);
		}
	}
//2位
	for(int i=10;i<=99;i++){
		c[2]=i / 10 %10;
		c[3]=i % 10;
		s=c[2]*(1e2+1)+c[3]*10;
//		for(int j=0;j<4;j++)cout<<c[j]<<" ";
//		cout<<s<<endl;	
		if (s >=a && s <= b){
			pd(s);
		}
	}

//3
	for(int i=100;i<=999;i++){
		c[1]=i / 100 % 10;
		c[2]=i / 10 %10;
		c[3]=i % 10;
		s=c[1]*(1e4+1)+c[2]*(1e3+1e1)+c[3]*(1e2);
//		for(int j=0;j<4;j++)cout<<c[j]<<" ";
//		cout<<s<<endl;
//		if(s==15901) return 0;
		//10601 出错
		if (s >=a && s <= b){
			pd(s);
		}
	}

	
//4
	for(int i=1000;i<=9999;i++){
		c[0]=i / 1000;
		c[1]=i / 100 % 10;
		c[2]=i / 10 %10;
		c[3]=i % 10;
		s=c[0]*(1e6+1)+c[1]*(1e5+1e1)+c[2]*(1e4+1e2)+c[3]*(1e3);
//		for(int j=0;j<4;j++)cout<<c[j]<<" ";
//		cout<<s<<endl;	
		if (s >=a && s <= b){
			pd(s);
		}
	}
	return 0;
}
