#include <iostream>
using namespace std;
int &retaddr()
{
  static int x= 0;
  cout << "inside function: " << x << endl;
  x += 10;
  return x;
}
int main()
{
  int &ref = retaddr();
  ref += 50;
  cout << retaddr() << endl;
  cout << "after function call:" << ref << endl;
  return 0;
}