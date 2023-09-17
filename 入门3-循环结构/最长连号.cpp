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
	int a[10005];
	int maxl=1,curl=1;
	int cur,last;
	cin>>n;
	cin>>a[0];
	last=a[0];
	for(int i=1;i<n;i++){
		cin>>cur;
		if(cur-last == 1){
			//连续
			curl++;
		}else{
			maxl=max(maxl,curl);
			curl=1;
		}
		last=cur;
	}
	cout<<max(maxl,curl)<<endl;
	return 0;
}
