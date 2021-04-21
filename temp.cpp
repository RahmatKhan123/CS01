//promp the user to ente substance temperature.
//repeat the steps as long as the temperature is greater than 102.5 degree Celsius:
//a. tell the technician to check the remperature, wait 5 minutes, and check the temperature again.
//prompt the user to enter the substance temperature again. 
//b. promp the user to enter the substance temperatuer.
// After the loop finish, tell the technician that the temperature is accetptable and to check again after 15 minutes.
/*#include <iostream>
using namespace std;
int main()
{
  const double MAX_TEMP = 102.5;
  double temp;

  cout << "Enter the substance temperature: " << endl;
  cin >> temp;

  while (temp > MAX_TEMP)
  {
    cout << "The temperature is too high Turn down\n";
    cout << " the termostat down and wait 5 minutes: \n";
    cout << "Check the Celsius temperature again:\n";
    cout << "Enter temperature again:\n";
    cin >> temp;
  }
  cout << "the temperature is accetptable: \n";
  cout << "check the temperatuer in 15 minutes again:";  
}*/
/*#include <iostream>
using namespace std;

double nthpowern( int n )
{
  float i = 1;

  while ( n < 0 )
  {
    i /= 2.0;
    n++;
  }
  cout << i << endl;
  return(i); 
}*/
#include <iostream>
using namespace std;
int main() //writing a program that find out the even numbers in a given range.
{
  int begin, end;
  int i;

  do 
  {
    cout << "enter two number in the range 1 to 100" << endl;
    cin >> begin >> end;
    if ((begin > end) || ((begin < 0) || (end > 100)))
    {
      cout << "your input is out of range: " << endl;
     
      cout << "please input again:" << endl;
      cin >> begin >> end;
    }
    else if(begin < end)
    {

      i = begin;
      if (i % 2 == 0)
      cout << i;
    }
    
    i++;
    
  }
  while(i < end);

}