#include <iostream>
using namespace std;
struct firma
{
	char name[31];
	char egn[11];
	char duty[21];
	double payment;
};
int main()
{
	int n;
	firma workers[21];
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin.get();
		cin.getline(workers[i].name,31);k
		l
		cin>>workers[i].egn;
		cin>>workers[i].payment;
	}
	for(int j=0; j<n; j++)
	{
		if(workers[j].payment<700)
		{
			cout<<workers[j].name<<endl;
		}
	}
	return 0;
}
