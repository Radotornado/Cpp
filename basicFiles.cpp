#include <iostream>
#include <fstream>
using namespace std;
int main() {
    char str[21]; 
  ofstream file_out; 
  int i;
  file_out.open("myfile.txt");
  for(i=0;i<10;i++) {
    cin>>str; 
    file_out<<str<<" ";
    cin>>str;
    file_out<<str<<" ";
    cin>>str;
    file_out<<str<<" ";
    cin>>str;
    file_out<<str<<'\n';
  }
  file_out.close();
  return 0;
}
