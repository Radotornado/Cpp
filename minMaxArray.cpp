#include <iostream>
using namespace std;
int main ()
{
	int A[10]={0},sizeA;
	int *pA=A;
	cout<<"intput size A:";
	cin>>sizeA;
	cout<<"input Array"<<endl;
	int i=0;
	while(i<sizeA)
	{
		cout<<"A["<<i<<"]=";
		cin>>*pA++;
		i++;
	}
	cout<<endl;
	pA=A;
	int min,max;
	min=max=*pA;
	i=0;
	while(i++<sizeA)
	{
		if(min>*pA)min=*pA;
		if(max<*pA)max=*pA;
		pA++;
	}
	cout<<"max:"<<max<<endl;
	cout<<"min:"<<min<<endl;
	cout<<"max-min"<<(max-min);
	return 0;
}
