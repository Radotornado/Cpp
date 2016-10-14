#include <iostream>
#include "stack.cpp"
using namespace std;
int main()
{ int Num;
cout<<"Number= ";
cin>>Num;
cout<<endl;
stack<int>st;
while(Num)
{ st.Push(Num%2);
Num=Num/2;
}
cout<<"Binary= ";
st.print();
return 0;
}
