#include <iostream>
using namespace std;
int main()
{
	int D[40] = {0}, sizeD;
	int *pD = D;
	cin>>sizeD;
	int i=0;
	while(i<sizeD)
	{
		cout<<"D["<<i<<"]=";
		cin>>sizeD;
	}
	cout<<endl;
	pD=D;
	double es=0.0;
	int ec = 0;
	i=0;
	while(i++<sizeD)
	{
		if(*pD%2==0)
		{
			es+=*pD;
			ec++;
		}
		pD++;
	}
	if(ec)
	{
		cout<<(es/ec)<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
