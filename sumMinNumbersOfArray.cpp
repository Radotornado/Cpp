#include <iostream>
 
using namespace std;
 
 
int main()
{
	int C[30] = {0}, sizeC;
	int *pC = C;

cout << "Input size C: ";
cin >> sizeC;
cout << "Input array:" << std::endl;
	int i=0;
	while(i<sizeC) {
		cout << "C[" << i << "]= ";
		cin >> *pC++;
		i++;
	}
	cout << endl;
 	pC = C;
 i=0;
	while( i++<sizeC && *pC >= 0) pC++;
 cout << "First negative number: " << *pC++ <<endl;
 
	double sum = 0.0;
	while( i++<sizeC ) sum += *pC++;
 
	cout << "Sum: " << sum << endl;
 
	return 0;
}
