#include <cstdlib>
#include <iostream>

using namespace std;

const int size = 100;
template <class T>
class queue
{public:
  queue();				                   // �����������
  ~queue();				                   // ����������
  queue(queue const &);		               // ����������� �� �����������
  queue& operator=(queue const &);	       // ���������� ������� �� 
 					                       // �����������
void InsertElem(T const &);	               // ��������� �� ������� � ������
  int DeleteElem(T &);	                   // ���������� �� ������� �� ������
  void print();			                   // ��������� �� ������
 private:
  int front, rear, n;
  T *a;
  void delqueue();		                   // ��������� �� ������
  void copy(queue const &);	               // �������� �� ������
};
template <class T>
queue<T>::queue() 
{a = new T[size];
 n = 0;
 front = 0;
 rear = 0;
}
template <class T>
queue<T>::~queue()
{delqueue();
}
template <class T>
queue<T>::queue(queue<T> const& r)
{copy(r);
}
template <class T>
queue<T>& queue<T>::operator=(queue<T> const& r)
{if (this != &r)
{delqueue();
 copy(r);
}
return *this;
}
template <class T>
void queue<T>::InsertElem(T const & x)
{if (n == size) cout << "Impossible! \n";
 else
 {a[rear] = x; 
  n++; rear++;
  rear = rear % size;
 }
}
template <class T>
int queue<T>::DeleteElem(T &x)
{if (n > 0) 
 {x = a[front]; n--; front++; 
  front = front % size;
  return 1;
 } 
 else return 0;
}
template <class T>
void queue<T>::delqueue()
{delete [] a;
}
template <class T>
void queue<T>::copy(queue<T> const &r)
{a = new T[size];
 for (int i = 0; i < size; i++)
	 a[i] = r.a[i];
 n = r.n;
 front = r.front;
 rear = r.rear;
}
template <class T>
void queue<T>::print()
{T x;
 while (DeleteElem(x))
   cout << x << "  ";
 cout << endl;
}
