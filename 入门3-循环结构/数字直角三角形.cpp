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
//	n=5;
	string s="";
	for(int i=1;i<=n*(n+1)/2;i++){
			s+=i/10+'0';
			s+=i%10+'0';
	}
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<2*(n-i);j++){
			cout<<s[k];
			k++;
		}
		cout<<endl;
	}
	return 0;
}
