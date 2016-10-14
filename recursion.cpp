#include <iostream>
using namespace std;
double factoriel(unsigned int num);
int main ()
{
	int n,m,k;
	cin>>n;
	cin>>m;
	cin>>k;
	double result;
	cout<<factoriel(m)<<endl;
	cout<<factoriel(n)<<endl;
	cout<<factoriel(k)<<endl;
	result = (factoriel(m)+factoriel(n)+factoriel(k))/(factoriel(5)+factoriel(3));
	cout<<result;
	return 0;
}
double factoriel(unsigned int num)
{
	if(0==num) return 1;
	double mult=1;
	do
	{
		mult*=num;
	}
	while(--num);
	return mult;
}
