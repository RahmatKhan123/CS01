#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace  std;
int main()
{
  /*char name[5], sum = 0;// simple form of array declearation;
  int number[] = {10, 20, 30};//the first element = 0,the rest of them = 0;
  double scores[3] = {10.0, 20.0};//

  cout << number[4] << endl;
  cout << "Size of number" << sizeof(number) << endl;
  cout << "size of name " << sizeof(name) << endl;
  cout << "sizeof name" << sizeof(scores) << endl;

  
  
  //7.5 range-base for loop
  int num[10] = {10,20,30,40,50,60,70,80,90,100};

  for (int i = 0; i<10; i++)
  {
    num[i] += 10;
    cout << num[i] << endl;
  }
  for(int &eachnumber : num) // range base for loop:
  {
    eachnumber+=10;
    cout << eachnumber << endl;// without refrence varaible sign the rangebased for loop with not be incremented.
    //To read-only purpose range-base for-loop.
    //to change the element value, use the refrence varaible type. 
  }
  

  
  int num[10] = {10,20,30,40,50,60,70,80,90,100};
  char name[] = "programming";

  for (int i = 0; i<sizeof(name); i++)// same as i<11;
  {
    cout << name[i] << " ";
  }
  cout << endl;

  for (char eachchar: name)// range based for loop
  //(data type, varaible name, array name)
  {
    cout << eachchar << endl;
  }
  */
  /*
// printing out VOWELS and how many are there and the number as well.
  int num[10] = {10,20,30,40,50,60,70,80,90,100};
  char name[] = "programming";
  int count = 0;


  for(char eachchar : name)

  {
    if (eachchar == 'a' || eachchar == 'e' || eachchar == 'i' || eachchar == 'o' || eachchar == 'u')
    {

      cout << eachchar << " " << endl;
      count++;
    }
  }
  cout << count << endl;*/



  
/*
  int num[10] = {0,1,2,3,4,5,6,7,8,9,};
  int num2[10] = {9,8,7,6,5,4,3,2,1,0};
  // add such that:9:9:9:9:9:9:9:9:9:9

  //

  int sum = 0;
  for(int i = 0;i < 10; i++)
  {
    sum = num[i] + num2[i];
    cout << sum << endl;
  }
  */





  // add such that num[0] + num2[9] = 0;
  //               num[1] + num2[8] = 2:
  //               num[3] + num2[7] = 4:
//     .......
         

/*const int N =10;
int num[N] = {0,1,2,3,4,5,6,7,8,9,};
int num2[N] = {9,8,7,6,5,4,3,2,1,0};

int sum = 0;
for (int i = 0; i < N; i++)
{
  sum = num[i] + num2[N-i-1];
  cout << sum << endl;
}*/

/* Array wit 5 random numbers between 0-9. how many numbers are same as the 1st element.

  int randnum[5];// declaring Array
  int samenum = 0;// varaible to hold same number
  srand(time(0)); creating random number generatore.
  for(int i = 0; i <= 9; i++)// loop for array iteration.
  {
    randnum[i] = (rand() % 10);
    if (randnum[0] == randnum[i])
    {
      cout << "the same numbers are: ";
      samenum++;
    }
    cout << randnum[i] << endl;
  }
  cout << "thare are " << samenum << "Random number: " << endl;*/




}