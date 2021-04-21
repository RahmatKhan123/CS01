// this program display a menu and asks the user to make 
// a selection. a do while loop repeats the program until 
// the user select item 4 from the menu.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  //constant for menu chioces.
  const int adult = 1, child = 2, senior = 3, quit = 4;
  // contant for membership rate
  const double adult1 = 40.0, child1 = 20.0, senior1 = 30.0;
  //varaibles
  int choices;    // menu choices
  int month;     // number of months
  double charges;  //monthly charges
  // set numeric output format
  cout << fixed << showpoint << setprecision(2);


  do
  {
    cout << "\n\t\tHealth Club membership Menu: \n\n";
    cout << "1. Standard Adult membership\n";
    cout << "2.Child membership\n";
    cout << "3.Seior citizen membership\n";
    cout << "4.quit the program\n\n";
    cout << "Enter you choice:";
    cin >> choices;
      while (choices < adult || choices > quit)
      {
        cout << "Please enter a valide menu choice:";
        cin >> choices;
      }
      if (choices != quit)
      {
        cout << "For how many months?";
        cin >> month;
    //Respond to the user's menu choices
        switch (choices)
        {
          case adult:
              charges = month * adult1;
              break;
          case child:
              charges = month * child1;
              break;
          case senior:
              charges = month * senior1; 
        }
    // display the total charges
        cout << " the total charges are" << charges << endl;
      }while (choices != quit);
      return (0);
      } 

}