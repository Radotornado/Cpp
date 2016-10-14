#include <iostream>
using namepace std;
int main()
{
	int a=3, b=8, p;
	int *pa, *pb;
	cout<<a<<" "<<b<<endl;
	pa=&a;
	pb=&b;
	p=*pa;
	*pa=*pb;
	*pb=p
	cout<<a<<" "<<b<<endl;
	return 0; 
}
