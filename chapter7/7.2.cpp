#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>




/*last class
//array declaration.
    //memory alyout: int num [10] = 4bytes * 10 elements = 40 bytes.
    //accessing elements: with index from 0 to N-1;
    // Range based for loop: for (int elem : name) = (data type Var_name : name of array) cout << elem;

    //for (int &elem : name) : to change the value must use refrence varaible: cout << elem:
    // count++;

    // today: 
    //warming up with example for two dimensional array and more: 
    //(1) Can we copy the array to another array?
    // int num1[10] = {1,2,3,4,5}
    // int num2[10];
    //num2 = num1; // Error in c++, but in python ot other higher languages it is okay.
  //array name is "constant pointer".
  


  //example to copy array:
  

  



  #include <iostream>
  #include <ctime>
  #include <cstdlib>
  using namespace std;
  int main()
  {
    const int N = 10;
    int num1[N]= {0,1,2,3,4,5,6,7,8,9};
    int num2[N]; // copy with reverse order
    // ex 9,7,8,,,0

    for (int i = 0; i <N; i++)
    {
      num2[i] = num1[N-i-1];
    }
    for (int v : num2)
      cout << v << endl;
    cout << endl;
  */

  
using namespace std;
int main()
{

  // find min and max value of the array.
  const int N = 10;
  int num1[N]= {0,1,2,3,4,5,6,7,8,9};
  int num2[N]; // copy with reverse order
    // ex 9,7,8,,,0
  int min, max,size;
  min = max = num1[0];

  for(int i = 1; i < N; i++)
  {
    if (min > num1[i])
      min = num1[i];
    if(max <num1[i])
      max = num1[i];


    cout << "Min Value" << setw(5) << min << endl;
    cout << "Max Value" << setw(5) << max << endl;
  }
  for (int i = 0; i <N; i++)
  {
    num2[i] = num1[N-i-1];
  }
  for (int v : num2)
    cout << v << "\t";
  cout << endl;
}