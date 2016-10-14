#include <iostream>
using namespace std;
double f1(double a, int n)
{
	if(n==0) return 1;
	if(n>0) return a*f1(a, n-1);
	if(n<0) return 1.0/f1(a,-n);
}
int main()
{
	double p,q,k,r,A;
	cin>>p;
	cin>>k;
	cin>>q;
	cin>>r;
	A=(f1(p,k)-f1(q,r))/2;
	cout<<A;
	return 0;
}
