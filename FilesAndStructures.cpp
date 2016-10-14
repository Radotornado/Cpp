#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct Book {
  char title[51];
  char author[51];
  double price;
  char ISBN_num[16];
};
int main() {
	Book books[50];
  int i,n;
  cout<<"Vavedi boi knigi:";
  cin>>n;
  for(i=0;i<n;i++) {
    cin.get();
    cout<<"zagavie:";
    cin.getline(books[i].title,51);
    cout<<"autor:";
    cin.getline(books[i].author,51);
    cout<<"price:";
    cin>>books[i].price;
    cout<<"ISBN omer:";
    cin>>books[i].ISBN_num;
  }
  ofstream file_out;
  file_out.open("file_1.txt");
  for(i=0;i<n;i++) {
    file_out<<books[i].title<<'\n';
    file_out<<books[i].author<<'\n';
    file_out<<books[i].price<<'\n';
    file_out<<books[i].ISBN_num<<'\n';
  }
   file_out.close();
  char buf_str[51],isbn[16];
  double buf;
  ifstream file_in;
  file_in.open("file_1.txt");
  cout<<"Vavedi ISBN nomer:";
  cin>>isbn;
  for(i=0;i<n;i++) {
    file_in.getline(buf_str,51);
    file_in.getline(buf_str,51);
    file_in>>buf;
    file_in>>buf_str;
    if(strcmp(buf_str, isbn)==0) break;
  }
  if(i<n)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  file_in.close();
  return 0;
}
