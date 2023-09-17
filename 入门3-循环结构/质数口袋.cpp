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
int a[100005];
int main(){
	int s,res=0,ans=0;
	cin>>s;
	memset(a,0,sizeof(a));
	for(int i=2;i<1000;i++){
		for(int j=2;j*i<=100004;j++){
			a[i*j]=1;//合数
		}
	}
	for(int i=2;i<=3000;i++){
//		cout<<i<<" "<<a[i]<<endl;
//		continue;
		
		if(a[i]==0 ){
//			cout<<i<<endl;
			res+=i;
			ans++;
		}
		if(res>s){
			cout<<ans-1<<endl;
			return 0;
		}
		else if(a[i]==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
