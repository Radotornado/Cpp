#include <iostream>
#include "queue.cpp"
int main() 
{ queue<int>q;
for(int i=1;i<=10;i++)
q.InsertElem(i);
q.print();
queue<char>p;
for(char c='a';c<='z';c++)
p.InsertElem(c);
p.print();
	return 0;
}
