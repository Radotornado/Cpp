#include <iostream>
#include <fstream>
using namespace std;
int main() {
  char str[21];
  ofstream file_out; 
  ifstream file_in; 
  int i;
  file_in.open("MyFile.txt");
  file_out.open("MyFile1.txt");
  for(i=0;i<10;i++) {
    file_in>>str;
    file_out<<str<<" ";
    file_in>>str;
    file_out<<str<<" ";
    file_in>>str;
    file_out<<str<<" ";
    file_in>>str;
    file_out<<str<<'\n';
  }
  file_in.close();
  file_out.close();
  cout<<"Finish";
  return 0;
}
