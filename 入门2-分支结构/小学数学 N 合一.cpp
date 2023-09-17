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
	double p=3.141593;
	switch (n) {
	case 1:
		//TODO
		cout<<"I love Luogu!"<<endl;
		break;
	case 2:
		//TODO
		cout<<"6 4"<<endl;
		break;
	case 3:
		printf("3\n12\n2\n");
		break;
	case 4:
		cout<<"166.667"<<endl;
		break;
	case 5:
		cout<<480/32<<endl;
		break;
	case 6:
		cout<<sqrt(6*6+9*9);
		break;
	case 7:
		printf("110\n90\n0\n");
		break;
	case 8:
		cout<<p*10<<endl<<p*25<<endl<<4.0*p*125/3.0<<endl;
		break;
	case 9:
		cout<<"22"<<endl;
		break;
	case 10:
		cout<<"9"<<endl;
		break;
	case 11:
		cout<<1.0*100/3;
		break;
	case 12:
		cout<<(int)('M'-'A')+1<<endl<<(char)(18+'A'-1);
		break;
	case 13:
		cout<<(int)(pow(4.0*p*(4*4*4+10*10*10)/3.0,1.0*1/3));
		break;
	case 14:
		cout<<"50"<<endl;
		break;
		
	default:
		//TODO
		break;
	}
	return 0;
}
