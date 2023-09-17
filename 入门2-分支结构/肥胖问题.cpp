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
	double m,h;
	double bmi;
	cin>>m>>h;
	bmi=m/h/h;
	if(bmi<18.5){
		printf("Underweight\n");
	}
	else if(bmi>=24){
		cout<<bmi<<endl<<"Overweight"<<endl;
	}
	else{
		printf("Normal\n");
	}
	return 0;
}
