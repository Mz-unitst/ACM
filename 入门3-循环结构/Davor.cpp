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
//	cout<<40404/52/7;
	cin>>n;
	int x,k,y;
	y=n/52/7;
	if(y<=103){
		cout<<y-3<<endl<<1;
	}else{
		switch (y%3) {
		case 1:
			//TODO
			cout<<100<<endl<<(y-100)/3<<endl;
			break;
		case 2:
			//TODO
			cout<<98<<endl<<(y-98)/3<<endl;
			break;
		default:
			//TODO
			cout<<99<<endl<<(y-99)/3<<endl;
			break;
		}
	}
	return 0;
}
