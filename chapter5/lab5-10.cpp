//write a program that calculate the summation of a certain range such that is less than the user input number.
// the range starts from0. find the end of range that the summation is less than the user input.
//ex: user input = 10;[0,1,2,3]= 0+1+2+3=6<10. answerr = 3
//ex: user input =15: [0,1,2,3,4]=10<15. answer = 4.
#include <iostream>
using namespace std;
int main()
{
  /*int userinput;
  int i = 0;
  int sum = 0;

  cout << "Input a number: "<< endl;
  cin >> userinput;

  if (userinput < 0)
  {
    cout << "Input again: " << endl;
    cin >> userinput;
  }
  
    while (sum < userinput)
    {
      sum +=i;
      i++;
    }
    i = i -1;
  

  cout << "the summation is " << sum << "the end of range is: " << i << endl;*/
  int userinput;
  int i = 0;
  int sum = 0;

  cout << "Input a number: " << endl;
  cin >> userinput;

  if (userinput < 0)
  {
    cout << "Input again:" << endl;
    cin >> userinput;
  }

  while (sum < userinput)
  {
    sum +=i;
    i++;
  }
  i = i -1;

  cout << sum << endl;
  cout << i << endl;

}