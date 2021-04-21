//illustrate what the function retaddr() will return:
//what value will be displayed in main function?
#include <iostream>
using namespace std;

int &retaddr()
{
  static int x = 10;
  return x;
}
int main()
{
  int &ref = retaddr();
  ref = 50;
  cout << retaddr() << endl;
  retaddr() +=30;
  cout << retaddr() << endl;
  return 0;
}