#include <iostream>
using namespace std;
int main()
{
  char ch = 65;
  int i = 0;
  while(i<90)
  {
    cout << static_cast<char>(i);
    i++;
    if(i%16==0)
    cout << i << endl;
  }
}