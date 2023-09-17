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
	int y,m;
	cin>>y>>m;
	if(m==2){
		if(y%4==0 && y%100!=0 ||  y%400==0) cout<<"29";
		else printf("28");
	}
	else if(m==1 || m==3 || m==5 || m==7 || m==8 || m== 10 || m== 12)cout<<"31";
	else cout<<"30";
	cout<<endl;
	return 0;
}
