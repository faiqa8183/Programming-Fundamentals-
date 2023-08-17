#include <iostream>
using namespace std;
int main ()
{
  int i=0;
  char str[100];
  char c;
  cout<<"enter sentence : "<<endl;
  cin.getline(str, 100);
  while (str[i])
  {
    c=str[i];
    putchar (toupper(c));
    i++;
  }
  return 0;
}