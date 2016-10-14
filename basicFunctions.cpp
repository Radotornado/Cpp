#include <iostream>
using namespace std;
double Area(double a, double b, double &P, double &S);
int main ()
{
	int a1, a2,b2,b1,P1,P2,Area1,Area2;
	cin>>a1;
	cin>>a2;
	cin>>b1;
	cin>>b2;
	Area(a1,b2,P1,Area1);
	Area(a2,b2,P2,Area2);
	cout<<Area1-Area2;
	cout<<P1+P2;
	return 0;
}
double Area(double a, double b, double &P, double &S)
{
	P=2*a+2*b;
	S=a*b;
}
