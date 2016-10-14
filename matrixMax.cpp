#include <iostream>
using namespace std;
int main() 
{
	int i,j,a[10][30],n,m,max;
	cout<<"number of rows:";
	cin>>n;
	cout<<"number of columns:";
	cin>>m;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
	
	}
	for(i=0;i<n;i++)
	{
		max=a[i][0];
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]<<" "; 
		}
		cout<<max<<" ";
		cout<<endl;
	}
	return 0;
}
