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
	int a[3][3];
	for(int i=0;i<3;i++){
		cin>>a[i][0]>>a[i][1];
		a[i][2]=ceil(1.0*n/a[i][0])*a[i][1];
	}
	cout<<min(min(a[0][2],a[1][2]),a[2][2]);
	
	return 0;
}
