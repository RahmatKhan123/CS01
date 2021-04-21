//James
#include <iostream>
using namespace std;

int primenumbers(int, int);

int main(){
  int a,b,i,j;
  bool isPrime = true;
  cout << "Please enter two numbers\n";
  cin >> a;
  cin >> b;
  i = a;
  j = b;
  
  
  primenumbers(i,j);
  

}

int primenumbers(int i, int j){
  
  for (i=0; i < j; i++){
    for ( j=2; j < i /2; j++){
      if (j % i == 0){
        break;
      }
      else {
        cout << i << "is a prime number";
      }
      }
    }
  }
}