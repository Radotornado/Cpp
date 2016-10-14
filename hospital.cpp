#include <iostream>
using namespace std;
struct Hospital
{
   char name[31];
   char diagnose[31];
   int days;	
};
int main()
{
	int n;
	Hospital patients[50];
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin.get();
		cin.getline(patients[i].name, 31);
		cin>>patients[i].diagnose;
		cin>>patients[i].days;
	}
	int ind = 0, max = patients[0].days;
	char finddiagnose [31];
	cin>>finddiagnose;
	for(int j=0; j<n; j++)
	{
		if(strcmp(patients[j].diagnose, finddiagnose)==0)
		{
			cout<<patients[j].name<<endl;
		}
		if(max<patients[j].days)
		{
			max = patients[j].days;
			ind = j;
		}
	}
	cout<<patients[ind].name=" ";
	cout<<patients[ind].diagnose=" ";
	cout<<patients[ind].days=" ";
	return 0;
}
