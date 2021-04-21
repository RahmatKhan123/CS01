#include <iostream>
using namespace std;
int main()
{
  int num = 4;
  cout << "the variable num is " << num << endl;
  cout << "now i will increment num with prefix increment: " << endl;
  num ++;

  cout << "now the variable num is " << num << endl;
  cout << "I will increment varaible num again with prefix increment:. \n\n";
  ++num;

  cout << "now the varaible num is " << num << endl;
  cout << "now i will decrement varaible num with postfix decrement: " << endl;

  num --;
  cout << "varaible num is " << num << endl;
  cout << "now i will decrement num again with prefix decrement:" << endl;
  
  --num;

  cout << "now the varaible num is" << num << endl;
}