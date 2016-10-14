#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
struct elem
{T inf;
 elem *link;
};
template <class T>
class LList
{public:
  LList();
  ~LList();
  LList(LList const&);
  LList& operator=(LList const &);
  void print();
  void IterStart(elem<T>* = NULL);
  elem<T>* Iter();
  void ToEnd(T const &);
  void InsertAfter(elem<T> *, T const &);
  void InsertBefore(elem<T> *, T const &);
  int DeleteAfter(elem<T> *, T &);
  int DeleteBefore(elem<T> *, T &);
  void DeleteElem(elem<T> *, T &);
  int len();
  void concat(LList const&);
  void reverse();
 private:
  elem<T> *Start, 		       // указател към началото
		  	 *End,			    // указател към края
		    *Current;		    // указател към текущ елемент
  void DeleteList();
  void CopyList(LList<T> const &);
};

template <class T>	           // конструктор
LList<T>::LList()
{Start = NULL;
 End = NULL;
}

template <class T>	           // деструктор
LList<T>::~LList()
{DeleteList();
}

template <class T>	           // конструктор за присвояване
LList<T>::LList(LList<T> const& r)
{CopyList(r);
}

template <class T>	            //операторна функция за присвояване
LList<T>& LList<T>::operator=(LList<T> const & r)
{if (this != &r)
 {DeleteList();
  CopyList(r);
 }
 return *this;
}

// template <class T>	
// void LList<T>::DeleteList()
// {elem<T> *p;
//  while (Start)
//  {p = Start; 
//   Start = Start->link;
//   delete p;
//  }
//  End = NULL;
// }

template <class T>	
void LList<T>::DeleteList()
	{if (End)
 	 {T x;
	  while (DeleteAfter(Start, x));
	  DeleteElem(Start, x);
	 }
	}

// template <class T>	
// void LList<T>::DeleteList()
// 	{if (Start)
//  	 {T x;
// 	  while (DeleteBefore(End, x));
// 	  DeleteElem(Start, x);
// 	 }
// 	}

template <class T>	
void LList<T>::CopyList(LList<T> const & r)
{elem<T> *p = r.Start, *q;
 if (r.Start)
 {Start = new elem<T>;
  End = Start;
  while (p)
  {End->inf = p->inf;
   End->link = NULL;
   p = p->link;
   if (p)
   {q = End;
    End = new elem<T>;
    q->link = End;
   }
  }
 }
}

template <class T>	
void LList<T>::print()
{elem<T> *p = Start;
 while (p)
 {cout << p->inf << " ";
  p = p->link;
 }
 cout << endl;
}

template <class T>	
void LList<T>::IterStart(elem<T> *p)
{if (p) Current = p;
 else Current = Start;
}

template <class T>	
elem<T>* LList<T>::Iter()
{elem<T> *p = Current;
 if (Current) Current = Current->link;
 return p;
}

// template <class T>
// void LList<T>::print()
// {IterStart();
//  while (Iter())
//  {cout << Iter()->inf << " ";
//  }
//  cout << endl;
// }

template <class T>	
void LList<T>::ToEnd(T const & x)
{Current = End;
 End = new elem<T>;
 End->inf = x;
 End->link = NULL;
 if (Current) Current->link = End;
 else Start = End;
} 

template <class T>
void LList<T>::InsertAfter(elem<T> *p, T const & x)
{elem<T> *q = new elem<T>;
 q->inf = x;
 q->link = p->link;
 if (p == End) End = q;
 p->link = q;
}

template <class T>	
void LList<T>::InsertBefore(elem<T> * p, T const& x)
{elem<T> *q = new elem<T>;
 *q = *p;
 if (p == End) End = q;
 p->inf = x;
 p->link = q;
} 

template <class T>	
int LList<T>::DeleteAfter(elem<T> *p, T &x)
{if (p->link)
{elem<T> *q = p->link;
 x = q->inf;
 p->link = q->link;
 if (q == End) End = p;
 delete q;
 return 1;
 }
 else return 0;
}

template <class T>
void LList<T>::DeleteElem(elem<T> *p, T &x)
{if (p == Start)
 {x = p->inf;
  if (Start == End)
  {Start = End = NULL;
  }
  else Start = Start->link;
  delete p;
 }
 else
 {elem<T> *q = Start;
  while (q->link != p) q = q->link;
  DeleteAfter(q, x);
 }
}

template <class T>
int LList<T>::DeleteBefore(elem<T> *p, T &x)
{if (p != Start)
 {elem<T> *q=Start;
  while (q->link != p) q = q->link;
  DeleteElem(q, x);
  return 1;
 }
 else return 0;
}

template <class T>
int LList<T>::len()
{int n = 0;
 IterStart();
 elem<T> *p = Iter();
 while (p)
 {n++;
  p = Iter();
 }
 return n;
}

// template <class T>
// int LList<T>::len()
// {int n = 0;
//  elem<T> *p = Start;
//  while (p)
//  {n++;
//   p = p->link;
//  }
//  return n;
// }

template <class T>	
void LList<T>::concat(LList<T> const &L)
{elem<T> *p = L.Start;
 while (p)
 {ToEnd(p->inf);
  p = p->link;
 }
}

template <class T>
void LList<T>::reverse()
{LList<T> l;
 IterStart();
 elem<T> *p = Iter();
 if (p)
 {l.ToEnd(p->inf);
  p = p->link;
  while (p)
  {l.InsertBefore(l.Start, p->inf);
   p = p->link;
  }
 }
 *this = l;
}

// template <class T>
// void LList<T>::reverse()
// {LList<T> l;
//  IterStart();
//  elem<T> *p = Iter();
//  if (p)
//  {l.ToEnd(p->inf);
//   p = p->link;
//   while (p)
//   {l.InsertBefore(l.Start, p->inf);
//    p = p->link;
//   }
//  }
//  *this = l;
// }

// end !!!!!!!
