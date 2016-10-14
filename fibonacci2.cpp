#include <iostream>
using namespace std;
unsigned int fibonachi(unsigned int n, unsigned int *founded);
int main()
{
	int k, n;
	cin>>k;
	unsigned int foundedArray[5000]={0};
	for(int i=1; i<=k; i++)
	{
		cout<<"fibonachi("<<i<<");";
		cout<<fibonachi(i, foundedArray);
	}
	return 0;
}
unsigned int fibonachi(unsigned int n, unsigned int *founded)
{
	if(n<=2) return 1;
	if(founded[n]>0)return founded[n];
	unsigned int fibonachiNum;
	fibonachiNum = fibonachi(n-1, founded) + fibonachi(n-1, founded);
	founded[n] = fibonachiNum;
	return fibonachiNum;
}
