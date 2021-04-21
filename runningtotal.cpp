//this program takes daily sales amount over a period of //time and calculate their total
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int days; // number of days
  double total = 0.0; // initailize accumalotr to 0.

  // get the number of days.
  cout << "how many days do you have sales: " << endl;
  cin >> days;
  for (int count = 1; count <= days; count++)
  {
    double sales;
    cout << "enter the sales for days:" << count << ": " << endl;
    cin >> sales;
    total += sales;

  }
  cout << fixed << showpoint << setprecision(2);
  cout << "the total sales is: " << total << endl;

}