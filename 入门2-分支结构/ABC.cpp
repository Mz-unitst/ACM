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
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b)swap(a,b);
	if(a>c)swap(a,c);
	if(b>c)swap(c,b);
	char s;
	for(int i=0;i<=2;i++){
		cin>>s;
		switch (s) {
		case 'A':
			//TODO
			cout<<a;
			break;
		case 'B':
			//TODO
			cout<<b;
			break;
		default:
			//TODO
			cout<<c;
			break;
		}
		if(i!=2)cout<<" ";
		
	}
	return 0;
}
