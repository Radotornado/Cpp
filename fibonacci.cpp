#include <iostream>
using namespace std;
double fib(int n);
int main()
{
	int k,f,i;
	cin>>k;
	i=1;
	while(fib(i)<=k)
	{
		cout<<fib(i)<<endl;
		i++;
	}
	return 0;
}
double fib(int n)
{
	double a1,a2,a3;
	a1=1;
	a2=1;
	if(n==1||n==2) return 1;
	if(n==3) return 2;
	for(int i=3; i<=n;i++)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	return a3;
}
