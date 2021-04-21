//this program demostrad a user controlled for loop.
/*#include <iostream>
using namespace std;
int main()
{ //initialize the start and ending numbers.
  int min_number, max_number;
  cout << "i will dispaly a table of numbers\n";
  cout << "enter the start number:\n";
  cin >> min_number;
  cout << "enter the ending number:\n";
  cin >> max_number;

  cout << "number.  number squared:" << endl;
  cout << "-------------------------\n";
  for (int num = min_number; num <= max_number; num++)
      cout << num << " " << num * num << endl;
  return 0;


}*/
/*#include <iostream>
using namespace std;

int main()
{
  const  int N=5, M=5;
    int     i, j;
    for(i=0;i<N;i++) {
        for(j=i; j<M-i; j++)
            cout << " (" << i << "," << j << ") " ;
        cout << endl;
    }
}*/
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream ifs;
  string name;
  int N = 10;
  int score1, score2;
  double sum = 0;
  double average = 0;
  double total;
  

  ifs.open("students.txt");
  if(ifs.fail())
  {
    cerr << "file open Error! \n";
    exit(0);

  }
  
  ifs >> N;
  for (int i = 0; i < N; i++){

    ifs >> name;
    ifs >> score1 >> score2;
    cout << name << " " ;
    cout << score1 << " " ;
    cout << score2 << endl ;
    sum = score1 + score2;
    average = sum /2.0;
    cout << "average is : " << average << endl;
    cout << "sum is : " << sum << endl;
    total = total + sum;
  
  }
  total = total;
  average = sum / 2.0;
  cout << " the average of all student is: " << average << endl;
  cout << "the total score of all student is: " << total << endl;
  ifs.close();

}*/

/*[3] Make the program that writes the numbers into the file “numbers.txt”.
We are going to make N(defined as 10) random numbers that should be between 1 to 50. When each number is generated, we check the number that is greater than the preceding number. If so, the number will be written into the file "numbers.txt".
For example, we assume that there are 10 numbers: 10 5 6 8 3 25 15 10 45 30.
In this example, we need to write 6 8 25 45 into a file.
We will skip the first number because there is no preceding number.*/
/*#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int getRdnum(void)
{
  int rdnum;
  rdnum = rand() % 50;
  for (int i = 0; i < 10; i++)
  {
    rdnum = (rand() % 50) + 1;
    cout << rdnum << endl;
  }
}
int isGreater(int &n)
{
  static int perc = 0;
  int a, b;
  a = n;
  if (perc ==0)
  {
    perc = n;
    return (0);
  }
  if( perc < n)
  {
    perc = n;
    return(1);
  }
  else
  {
    perc = n;
    return(0);
  }

}
int getRdnum();
int isGreater(int &);
int main()
{

  int rdnum, i = 10, j = 10;
  ofstream ofs;
  ofs.open("numbers.txt");
  if(ofs.fail())
  {
    cerr << "Error! can not open file:" << endl;
    exit(0);
  }
  while (i < 10)
  {
    rdnum = getRdnum();
    j = isGreater(rdnum);

    if (j == 1)
    {
      ofs << rdnum << endl;
    }
  }
}*/
/*[4] the program that generates a random number between 1 to 100 We are going to use the function getRdnum( ) with overloaded parameters. 
When we call the function 
getRdnum( ), without parameter, it will return a random number between 1 to 100
getRdnum(n2), with a parameter, it will return a random number between 1 to n2
getRdnum(n1, n2), it will return a random number between n1+1 to n2
Make the overload functions for generating random numbers and also make the main function to drive and test all these overloaded functions.*/
/*#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int getRdnum(); // 10 to 100
int getRdnum( int n2); // random number 1 to n2
int getRdnum(int n1, int n2); // random number n1+1 to n2

int main()
{
  int random;
  srand(time(0));
  int n1 = 10;
  int n2 = 100;

  cout << "Random number 1 to 100 " << getRdnum() << endl;
  cout << "random number 1 to n2: " << getRdnum(n2) << endl;
  cout << "random number n1+1 to n2: " << getRdnum() << endl;
}

int getRdnum()
{
  return rand() % 100 + 1;
}
int getRdnum(int n2)
{
  int n;
  int num;
  num = rand() % n2 + 1;
  return num;
}

int getRdnum(int n1, int n2)
{
  int num;
  num = rand() % (n2 - n1 + 1);

}
*/
/*Make your program that asks for two user input num1 and num2 (integer) and calculate the integer division n1/n2 if n1 > n2. Otherwise n2/n1. And then, the result must be written into the file "question5.txt". If the two numbers are the same, we will stop the program.

Make the function getInput to take two user input
Make the function isSame to check two numbers are the same. This function could be used as an exit condition of the loop structure.
Make the function intDivision to calculate the division.
Make the function fileWrite to write the division result to a file
Make the main function to drive all these functions
All other considerations for designing the programs can be set by your algorithms and your design specification.

the number of parameters, parameter data type, return value and type, and so on.*/
#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int intDivision(int, int);
void fileWrite(ofstream &, int);

int main()
{
  int num1, num2;
  int div;

  ofstream ofs;
  ofs.open("question5.txt");
  if (ofs.fail())
  {
    cerr << "File open Error\n";
    exit(0);
  }
  while(1)
  {
    getInput(num1, num2);
    if (isSame(num1, num2))
      break;
    div = intDivision(num1, num2);
    fileWrite(ofs, div);
  }
  ofs.close();
}

void getInput(int &n1, int &n2)
{
  cout << "enter the 1st number: " << endl;
  cin >> n1;
  cout << "Enter the 2nd number: " << endl;
  cin >> n2;
}
int isSame(int n1, int n2)
{
  if (n1 == n2)
    return(1);
  return(0);
}

int intDivision(int n1, int n2)
{
  int result;
  if (n1 > n2)
  {
    result = (n1 / n2);
  }
  else
    result = (n2 / n1);
  return result;

}
void fileWrite (ofstream &ofs, int div)
{
  ofs << div << endl;
  if(ofs.fail())
  {
    cerr << "file Write Error: \n";
    exit(0);
  }
}
