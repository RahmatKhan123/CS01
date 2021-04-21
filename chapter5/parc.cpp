#include <iostream>
using namespace std;
int main()
{
  /*int v = 10;
  do 
  {
    cout << v << endl;
    v++;

  }
  while(v<10);
  */
  int count = 0, num = 0, limit =4;
  do 
  {
    num += 2;
    count ++;
  }while (count < limit);
  cout << num << " " << count << endl;
  
}