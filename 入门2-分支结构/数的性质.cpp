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
	cin>>n;
	int a=0,b=0,c=0;
	if(n %2 ==0){
		a=1;
	}
	if(n>4 && n<=12) b=1;
	c=a+b;
	int s[3];
	if(c==2){
		cout<<"1 ";
	}else{cout<<"0 ";}
	if(c>=1){
		cout<<"1 ";
	}else{cout<<"0 ";}
	if(c==1){
		cout<<"1 ";
	}else{cout<<"0 ";}
	if(c==0){
		cout<<"1";
	}else{cout<<"0";}
	cout<<endl;
	return 0;
}
