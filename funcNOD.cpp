#include <iostream>
using namespace std;
double fNOD(int a, int b)
{
	while(a!=b) if(a>b)a=a-b;
	else b=b-a;
	return a;
}
int main()
{
	double A,a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	A=fNOD(a,b)+2*fNOD(c,d);
	cout<<A;
	return 0;
}
