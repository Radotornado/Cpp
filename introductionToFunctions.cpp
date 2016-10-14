#include <iostream>
using namespace std;
void f(double,int=10,char* ="example1");
int main(int argc, char** argv) 
{
	double x=1.5;
	int y=5;
	char z[]="example2";
	f(x,y,z);
	f(x,y);
	f(x);
	return 0;
}
void f(double x,int y, char* z)
{
	cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
}
