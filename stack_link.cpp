#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
class stack;
template <class T>
class item
{friend class stack<T>;
 private:
  item(T x = 0)
  {inf = x;
   link = 0;
  }
  T inf;
  item* link;
};
template <class T>
class stack
{public:
  stack(T x);
  stack();
  ~stack();
  stack(stack const &);
  stack& operator=(stack const &);
  void push(T const&);
  int pop(T & x);
  T top() const;
  bool empty() const;
  void print();
 private:
  item<T> *start;
  void delstack();
  void copy(stack const&);
};
template <class T>
stack<T>::stack(T x)
{start = new item<T>(x);
}
template <class T>
stack<T>::stack()
{start = NULL;
}
template <class T>
stack<T>::~stack()
{delstack();
}
template <class T>
stack<T>::stack(stack<T> const & r)
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
void stack<T>::delstack()
{item<T> *p;
 while (start)
 {p = start;
  start = start->link;
  delete p;
 }
}
template <class T>
void stack<T>::copy(stack<T> const & r)
{if (r.start)
{item<T> *p = r.start, 
*q = NULL, 
*s = NULL;
 start = new item<T>;
 start->inf = p->inf;
 start->link = q;
 q = start;
 p = p->link;
while (p)
 {s = new item<T>;
  s->inf = p->inf;
  q->link = s;
  q = s;
  p = p->link;
 }
 q->link = NULL;
}
else start = NULL;
}
template <class T>
void stack<T>::push(T const& x)
{item<T> *p = new item<T>(x);
 p->link = start;
 start = p;
}
template <class T>
int stack<T>::pop(T & x)
{item<T> *temp, 
*p = start;
 if (p)
 {x = p->inf;
  temp = p;
  p = p->link;
  delete temp;
  start = p;
  return 1;
 }
 else return 0;
}
template <class T>
T stack<T>::top() const
{return (*start).inf;
}
template <class T>
bool stack<T>::empty() const
{return start == NULL;
}
template <class T>
void stack<T>::print()
{T x;
 while (pop(x))
   cout << x << " ";
 cout << endl;
}
