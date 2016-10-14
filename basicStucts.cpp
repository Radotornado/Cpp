#include <iostream>
using namespace std;
struct student{
	char name[30];
	char surname[30];
	unsigned long int egn;

};
int main ()
{
	student ivan;
	cin>>ivan.name;
	cin>>ivan.surname;
	cin>>ivan.egn;
	
	cout<<"information:"<<endl;
	
	cout<<ivan.name<<endl;
	cout<<ivan.surname<<endl;
	cout<<"ko ma int egn to we"<<endl;
}
