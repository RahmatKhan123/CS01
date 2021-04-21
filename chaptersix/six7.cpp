//ronan
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // int num1, num2;
  // int sum;
  // cout << "Enter two numbers: ";
  // cin >> num1 >> num2;
  
  // sum  = 0;
  // do {
  //   sum = sum + num1;
  //   cout << num1++ << endl;
  // } while (num1 <= num2);
  // cout << "Sum " << sum << endl;

  int n, sum =0;

  cout << "Enter your number: " << endl;
  cin >> n;
  for(int b = 0 ; b <= n; b++){
    cout << b << endl;
  }
  for(int i = 0; i <= n; i++){
    sum += i;
  }
  cout<< "Your sum from 0 to " << n << " is: " << sum<< endl; 
}