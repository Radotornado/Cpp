#include<iostream>
#include "main65.cpp"
using namespace std;
int main()
{
	int num;
	cout<<"number=";
	cin>>num;
	cout<<endl;
	stack<int>st;
	while(num)
	{
		st.push(num%2);
		num = num/2;
	}
	cout<<"Binary=";
	st.print();
}
