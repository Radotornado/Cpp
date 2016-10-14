#include <iostream>
using namespace std;
unsigned int fac(unsigned int n);
int main()
{
	unsigned int a,b;
	do{
		cin>>a;
		cin>>b;
		if(b>a&&a<=0) break;
		cout<<"Incorrect"<<endl;
	}while(true);
	unsigned long long int reuslt;
	int result = (fac(a)+fac(b))/(b-a);
	cout<<"R=("<<a<<")+"<<b<<"!)/("<<b<<"-"<<a<<")="<<result<<endl;
	return 0;	
}
unsigned int fac(unsigned int n)
{
	if(n<2)return 1;
	return n*fac(n-1);
}

