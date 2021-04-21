//write a program that display the characters by the order of ASCII value from 65 to 90.
// display 16 characters in each line.
#include <iostream>
using namespace std;
int main()
{
  /*char ch = 65;
  int i;
  while (i <= 127)
  {
    cout << static_cast<char>(i);
    i++;

    if(i % 16 == 0)

    cout << endl;
  }
  
  char ch = 65;

  

  while(ch <= 90)
  {
    cout << ch << " ";
    ch++;
  }*/
  
  /*char ch = 65;
  int i;
  while(i <= 90)
  {
    cout << static_cast<char>(i);
    i++;

    if(i % 16 == 0)
    cout << endl;*/
  char ch = 65;
  int i;
  while (i <= 127)
  {
    cout << static_cast<char>(i);
    i++;
    if (i % 16 == 0)
    cout << endl;
  }

}