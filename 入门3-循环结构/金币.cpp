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
	if(n==1){
		cout<<"1\n";
		return 0;
	}
	int t1,t2;
	int u;
	int res=0;
	for(int i=1;i<1000;i++){
		t1=i*(i+1)/2;
		t2=(i+2)*(i+1)/2;
		if(t1<n && t2>=n){
			u=i;
			break;
		}
	}
//	cout<<u<<endl;
//	cout<<t1<<t2<<endl;
	for(int i=1;i<=u;i++){
		res+=i*i;
	}
	for(int i=t1+1;i<=n;i++){
		res+=u+1;
	}

	cout<<res<<endl;
	return 0;
}
