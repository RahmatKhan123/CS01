//Concepts:
//Find the Nth largest number in an array.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int makearray(int []);
void bubble(int [], int);
void printout(int[], int);

const int SIZE = 100;

int main()
{
  int number[SIZE];
  int last;



  last = makearray(number);
  printout(number, last);
  bubble(number, last);
  printout(number, last);

}
int makearray(int number[])
{
  int last;
  srand(time(NULL));
  //do{
    //last = rand() % 20;
  //}while(last < 10);
  last = rand() % 10 +10;                  // do while loop that makes the number of the     //array element less then 20 and greater than 10

  for(int i = 0; i < last; i++)
  {
    number[i] = rand() % 100;                      // forloop that generate the random number between 0 and 100.
  }
  return last;
  
  
}
void bubble(int number[], int last)
{
  
  int i;
  for (i = 0; i < last-1; i++)// for loop to ckeck for comparison from indix 0 to last element, the indix one to the last. and last to index 1.
  {
    
    if(number[i] > number[i+1])//means if 1st index is greater then the next index [i+1].
    //if we don't have the condition the 1st element move to last index, and not each element is being compared.
    swap(number[i], number[i+1]);// change the place of indexes, move the begger index to right and smaller index to the left.
    
  }

}

void printout(int number[], int last)
{
  for (int i = 0; i < last; i++)//this function prints out all the value of array(number[]), for each time it is called by the main function, because it iterate, for all the values of numberr and print out what ever the value is.
    cout << setw(5) << number[i];
  cout << endl;
}
//int number[SIZE] = {10, 20, 30, 40, 50};
        //int last = 5;
//for(int cant = 0; cant < last; cant++){

//for(int i = 0; i < last-1; i++){


  //swap(number[i], number[i+1])
  // swap the array index 0 to next index 1, and so on until the end of array is reach and swap continue till the last index.

  // how to swap last index with index 0.

  //for(int i = last-1; i > 0; i--)//i = last-1 beacuase we don't read 0.
//}
//swap(number[i], number[i-1])
//}
//to arrange from least to greatest.









/*#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int makearray(int[]);
void bubble(int[], int);
void printout(int[], int);

const int SIZE = 100;

int main() {
        int number[SIZE] = {15, 5, 30, 25, 20};  // 5, 30, 25, 20, 15
        int last, N;
		// last = makearray(number);

		last = 5;

		printout(number, last);

		cout << "Enter the number for N ";
		cin >> N; //2
		for(int cnt=0; cnt <= N; cnt++)
		{
			bubble(number, last);
		}
		cout << "N_th greatest number is " << number[last-N] << endl;
}
void bubble(int number[], int last)
{
			for(int i=0; i<last-1; i++){
				if (number[i] > number[i+1])
					swap(number[i], number[i+1]);
			}
			printout(number, last);
}

int makearray(int number[]) {
        int last;
        srand(time(NULL));
        last = rand() % 10 + 10; // from 10 to 19 

        for (int i = 0; i < last; i++)
                number[i] = rand() % 100;
        return last;
}

void printout(int numbers[], int last)
{
	cout << "Array Size : " << last << endl;
    for(int i = 0; i < last; i++)
    {
        cout << numbers[i]<< " ";
    }

    cout << endl;
}*/