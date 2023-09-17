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
	int n,k;
	cin>>n>>k;
	int sum1=0,sum2=0,n1=0,n2=0;
	for(int i=1;i<=n;i++){
		if(i%k==0) {
			sum1+=i;n1++;
		}else{
			sum2+=i;n2++;
		}
	}
//	cout<<sum1<<sum2;
	printf("%.1f %.1f",1.0*sum1/n1,1.0*sum2/n2);
	return 0;
}
