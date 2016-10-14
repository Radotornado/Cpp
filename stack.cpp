#include <cstdlib>
#include <iostream>

using namespace std;

const int size = 100;
template <class T>
class stack
{public:
  stack();				              // �����������
  ~stack();				              // ����������
  stack(stack const &);		          // ����������� �� �����������
  stack& operator=(stack const &);	  // ���������� ������� �� 
 					                  // �����������
  void Push(T const &);	              // ��������� �� ������� � ����
  void Pop();		                  // ���������� �� ������� �� �����
  T Top() const;
  bool Empty() const;
  void print();			              // ��������� �� �����
 private:
  int start, n;
  T *a;
  void delstack();		              // ��������� �� �����
  void copy(stack const &);	          // �������� �� �����
};
template <class T>
stack<T>::stack() 
{a = new T[size];
 n = 0;
 start = -1;
}
template <class T>
stack<T>::~stack()
{delstack();
}
template <class T>
stack<T>::stack(stack<T> const& r)
{copy(r);
}
template <class T>
stack<T>& stack<T>::operator=(stack<T> const& r)
{if (this != &r)
{delstack();
 copy(r);
}
return *this;
}
template <class T>
void stack<T>::Push(T const & x)
{if (n == size) cout << "Impossible ! \n";
 else
 {
  n++; start++;
  a[start] = x; 
  // start = start % size;
 }
}
template <class T>
bool stack<T>::Empty() const
{ return n==0; 
}
template <class T>
void stack<T>::Pop()
{if (!Empty()) 
 { n--; start--; 
  // start = start % size;
 } 
 else cout << "Empty stack ! \n";;
}
template <class T>
T stack<T>::Top() const
{ return a[start]; 
}
template <class T>
void stack<T>::delstack()
{delete [] a;
}
template <class T>
void stack<T>::copy(stack<T> const &r)
{a = new T[size];
 for (int i = 0; i < size; i++)
	 a[i] = r.a[i];
 n = r.n;
 start = r.start;
}
template <class T>
void stack<T>::print()
{
 while (!Empty())
   { cout << Top() << " " ; Pop(); }
 cout << endl;
}
