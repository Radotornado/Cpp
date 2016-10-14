#include <iostream>
using namespace std;
class Point
{public:
void Read();
double getX()const;
double getY()const;
double getZ()const;
private:
	double x, y, z;
};
void Point::Read()
{
	cout<<"x="; cin>>x;
	cout<<"y="; cin>>y;
	cout<<"z="; cin>>z;
}
double Point::getX()const
{
	return x;
}
double Point::getY()const
{
	return y;
}
double Point::getZ()const
{
	return z;
}
class Piramid
{
	public:
		void Read();
		bool ispointin(Point const &p) const;
	private:
		double a, b, c;
};
void Piramid::Read()
{
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
}
bool Piramid::ispointin(Point const &p) const
{
	return(p.getX()>=0 && p.getY()>=0 && p.getZ()>=0 && p.getX()/a + p.getY()/b + p.getZ()/c <= 1);
}
int main()
{
	Piramid p;
	p.Read();
	Point pt[100];
	int n; 
	cin>>n;
	for(int i=0; i<=n-1; i++)
	{
		cout<<"Point"<<i<<":\n";
		pt[i].Read();
	}
	int x=0;
	while(x<=n-2 && p.ispointin(pt[x])) x++;
	if(p.ispointin(pt[x])) cout<<"Yes";
	else cout<<"No";
	return 0;
}



