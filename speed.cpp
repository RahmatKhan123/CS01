//this program converts the speed 60 kmh through 130khp (in 10kphincrements) to mph.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  //constants for the speed.
  const int start_kph = 60; //starting speed.
  const int end_kph = 130; // end speed.
  const int increment = 10; // speed increment.
  
  //constant to hold the conversion factore.
  const double conversion_factore = 0.6214;
  int kph;
  double mph;
  cout << fixed << showpoint << setprecision(1);
  cout << "kph-----mph" << endl;
  cout << "------------------"<< endl;;
  // display speed
  for (kph = start_kph; kph <= end_kph; kph +=increment)
  {
    mph = kph * conversion_factore;
    // display speed in kph and mph
    cout << kph << "\t" << mph << endl;
  }

}