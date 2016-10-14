#include <iostream>
using namespace std;
int main()
 { int size;
 do
 { cout<<"size of array: ";
 cin>>size;
 } while (size<1);
 int*arr=new int[size];
 int i;
 for(i=0;i<=size-1;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 delete[] arr;
	return 0;
}
