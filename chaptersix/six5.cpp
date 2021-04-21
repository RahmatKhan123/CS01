//Parth

#include <iostream>
#include <iomanip>

using namespace std;

void primeNum(int,int);

int main(){
  // int n1, n2, sum=0;
  //  cout<< "Make sure the numbers are greater than 0. Now enter your number 1 and your number 2: "<<endl;
  //   cin>> n1>>n2;
    
  // do{
   
  //   sum += n1;
  //   n1++;
  // }while(n1 <= n2);
  // //n1++;
  // cout <<"Sum: "<< sum<<endl;

  int beg, end;

  cout<<"Enter your beginning and the ending numbers"<<endl;
  cin >> beg>>end;

  primeNum(beg,end);

}

void primeNum(int beg, int end){
  int n = beg, i;
  while(n<=end){
    for(i = 2; i< n ; i++){
      if(n%i==0){
        break;
      }
    }
    if(i != n){
      //blank because i dont want to print out not prime numbers
      //but writing code here can give you numbers that are not prime so its useful to have it this way imo. 
    }else{
      cout<<n<<" is a prime number!"<<endl;
    }
    n++;
  }
}