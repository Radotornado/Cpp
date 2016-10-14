#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class product
{
	private:
		char name[21];
		double price;
		int score;
		public:
			void read();
			void print() const;
			bool is(product const &) const;
			double getp() const;
			int gets() const;
};
void sort(int n, product* []);
int main()
{
	cout<<setprecision(4)<<setiosflags(ios::fixed);
	product table[300];
	product* ptable[300];
	int n;
	do
	{
		cout<<"number of products?";
		cin>>n;
	} while (n<1 || n>300);
	int i;
	for(i=0; i<n; i++)
	{
		table[i].read();
		ptable[i]=&table[i];
	}
	cout<<"table: \n";
	for(i=0; i<n; i++)
	{
		table[i].print();
		cout<<endl;
	}
	sort n, ptable;
	cout<<"\n new table: \n";
	for(i=0; i<n; i++)
	{
		ptable[i]->print();
		cout<<setw(7)<<ptable[i]gets()/ptable[i]->getp();
		cout<<endl;
	}
	return 0;
}
void product::read()
{
	cout<<"name"; cin>>name;
	cout<<"price"; cin>>price;
	cout<<"score"; cin>>score;
}
void product::print() const
{
	cout<<setw(25)<<name<<setw(10)<<price<<setw(12)<<score;
}
bool produc::is(product const & x) const
{
	return score/price>x.score/x.price;
}
double product::getp() const
{
	return price;
}
double product::gets() const
{
	return score;
}
void sort(int n, product* a[])
{
	for(int i=0; i<=n-2; i++)
	{
		int k=1;
		product* max=a[i];
		for(int j=i+1; j<=n-1; i++)
		if(max=a[j]->is(*max))
		{
			max=a[j];
			k=j;
		}
		max=a[i];
		a[i]=a[k];
		a[k]=max;
	}
}

