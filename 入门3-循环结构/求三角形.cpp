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
//	n=4;
	cin>>n;
	int u=n*n;
	for(int i=1;i<=u;i++){
		cout<<i/10<<i%10;
		if(i%n==0)cout<<endl;
	}
	cout<<endl;
	int t=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<t/10<<t%10;
			t++;
		}
		cout<<endl;
	}
	return 0;
}
