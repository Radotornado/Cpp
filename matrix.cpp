#include <iostream>
using namespace std;
int main()
{
	int i, j, a[10][20], n, m, sum;
	cin>>n;
	cin>>m;
	for(i=0; i<n; i++)
	for(j=0; j<n; j++)
	{
		cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];	
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		cout<<a[j][i]<<" ";
	}
	for(j=0; j<m; j++)
	{
		sum=0;
		for(i=0; i<n; i++)
		sum=sum + a[i][j];
		cout<<sum<<" ";
	}
	return 0;
}
