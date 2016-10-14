#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
struct elem
{T inf;
 elem* link;
};
template <class T>
class queue
{public:
  queue();
  ~queue();
  queue(queue const &);
  queue& operator=(queue const &);
  void InsertElem(T const&);
  int DeleteElem(T &);
  void print();
  bool empty() const;
 private:
  elem<T> *front, *rear;
  void delqueue();
  void copy(queue const&);
};
template <class T>	// конструктор
queue<T>::queue() 
{front = NULL;
 rear = NULL;
} 
template <class T>	// деструктор
queue<T>::~queue()
{delqueue();
}
template <class T>	// конструктор за присвояване
queue<T>::queue(queue const & r)
{copy(r);
}
template <class T>	// операторна функция за 				// присвояване
queue<T>& queue<T>::operator=(queue const& r)
{if (this != &r)
 {delqueue();
  copy(r);
 }
 return *this;
}
template <class T>	// изтриване на опашка
void queue<T>::delqueue()
{T x;
 while (DeleteElem(x));
}
template <class T>		// копиране на опашка
void queue<T>::copy(queue const & r)
{rear = NULL;
 if (r.rear)
 {elem<T> *p = r.front;
  while (p)
  {InsertElem(p->inf);
   p = p->link;
  }
 }
}
template <class T>		// включване на 						// елемент в опашка
void queue<T>::InsertElem(T const& x)
{elem<T> *p = new elem<T>;
 p->inf = x;
 p->link = NULL;
 if (rear) rear->link = p; 
 else front = p;
 rear = p;
}
template <class T>	// изтриване на елемент от 				// опашка
int queue<T>::DeleteElem(T & x)
{elem<T> *p;
 if (!rear) return 0;
 p = front;
 x = p->inf;
 if (p == rear) 
 {rear = NULL; 
  front = NULL;
 }
 else front = p->link;
 delete p;
 return 1;
}
template <class T>		// извеждане на опашка
void queue<T>::print()
{T x;
 while (DeleteElem(x))
   cout << x << " ";
 cout << endl;
}
template <class T>	// проверка за празна опашка
bool queue<T>::empty() const
{return rear == NULL;
}
