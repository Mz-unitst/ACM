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
	switch (n) {
	case 0:
		//TODO
		printf("Today, I ate 0 apple.\n");
		break;
	case 1:
		//TODO
		printf("Today, I ate 1 apple.\n");
		break;
	default:
		printf("Today, I ate %d apples.\n",n);
		//TODO
		break;
	}
	return 0;
}
