#include <iostream>
using namespace std;
int main()
{
	int E[40]={0}, sizeE;
	int *pE;
	cin>>sizeE;
	int i=0;
	while(i<sizeE)
	{
		cout<<"E["<<i<<"]=";
		cin<<*pE++;
		i++;
	}
	cout<<endl;
	pE = E;
	double m=1;
	bool f = false;
	i=0;
	while(i++<size)
	{
		if(*pE%==0)
		{
			m '='pE;
			f=true;
		}
		pE++;
	}
	if(f)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
