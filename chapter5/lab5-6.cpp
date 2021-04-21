// write a program tha display a table if speeds in kilometers per hr.
//with those values to converted to miles per hours.
//MPH +KPH *0.6214
//the table should show from the 60KPH to 130KPH in increment of 10.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int kph_start = 60;
  const int end_kph = 130;
  const int increment = 10;
  const double conversion = 0.6214;

  int kph;
  double mph;

  cout << fixed << showpoint << setprecision(1) << endl;

  cout << "KPH \t MPH \n" << endl;
  cout << "---------------" << endl;

  for (kph = kph_start; kph <= end_kph; kph += increment)
  {
    mph = kph * conversion;

    cout << kph << "\t" << mph << endl;
   }
}