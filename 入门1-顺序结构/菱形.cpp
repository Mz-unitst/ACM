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
	for(int i=0;i<5;i++){
		if(i<=2)
		{
			for(int j=2-i;j>=1;j--){
				cout<<" ";
			}
			for(int j=2*i+1;j>=1;j--)
				cout<<"*";
			
		}
		else
		{
			for(int j=0;j<=i-3;j++)
				cout<<" ";
			for(int j=9-2*i;j>=1;j--)
				cout<<"*";
			
		}
		cout<<endl;
	}
	return 0;
}
