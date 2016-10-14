#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
	char fname [20];
	char sname [20];
	char lname [20];
	double suspeh;
	char egn [11];
};
int main()
{
	Student students;
	fstream file;
	file.open("fail.txt", ios::out);
	int n;
	cout<<"Num of books: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Name: ";
		cin>>students.fname;
		cout<<"Surname: ";
		cin>>students.sname;
		cout<<"family name: ";
		cin>>students.lname;
		cout<<"Average marks: ";
		cin>>students.suspeh;
		cout<<"EGN: ";
		cin>>students.egn;
		file<<students.fname<<" ";
		file<<students.sname<<" ";
		file<<students.lname<<" ";
		file<<students.suspeh<<" ";
		file<<students.egn<<'\n';
	}
	file.close();
	file.open("nakakav_fail.txt", ios::in);
	for(int j = 0; j < n ;j++)
	{
		file>>students.fname;
		file>>students.sname;
		file>>students.lname;
		file>>students.suspeh;
		file>>students.egn;
		if(students.suspeh>=4&&students.suspeh<=5)
		{
			cout<<students.fname<<" ";
			cout<<students.sname<<" ";
			cout<<students.lname<<endl;
		}
	}
	file.close();
	return 0;
}

