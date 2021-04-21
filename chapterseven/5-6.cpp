/*Concepts:
In this programming lab, we are going to insert a “new element” into the array that already has sorted order. Also, we should delete one element from the array and the array should be re-arranged without any empty space. The total number of elements must be managed after insertion or deletion.*/


// array insertion
 
 
#include    <iostream>
#include    <iomanip>
using   namespace   std;
 
void    insertone(int [], int &, int);
void    deleteone(int [], int &, int);
void    printout(int [], int);
 
 
int     main()
{
    const   int SIZE=100;
    int     usernum;
    int     length=10;
    int i, pos;
    int     number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

    cout << "before Inserting:  ";

    printout(number, length);
    cout << "Enter the number to insert\n";
    cin >> usernum;
    printout(number, length);
    insertone(number, length, usernum);
    printout(number, length);
 
    cout << "Enter the number to delete\n";
    cin >> usernum;
    deleteone(number, length, usernum);
    printout(number, length);
}
void    insertone(int number[], int &length, int usernum)
{
  int i, pos;
  for (i = 0; i < length; i++)
  {
    if(number[i] > usernum)
      break;

  }
  pos = i;
  for (i = length-1; i >pos; i--)
    number[i+1] = number[i];
  number[pos] = usernum;
  length +=1;
  cout << "after inserting:";
  printout(number, length);
    
}
void    deleteone(int number[], int &length, int usernum)
{
  int i, pos;
  for(int i = 0; i < length; i++)
  {
    if(number[i] == usernum)
      break;
  }
  pos = i;
  for (i = pos+1; i <length; i++)
    number[i-1] = number[i];
  length -= 1;
  cout << "after delletion :";
  printout(number, length);
    
}
 
void    printout(int number[], int last)
{
    for(int i=0;i<last; i++)
        cout << setw(5) << number[i] ;
    cout << endl;
}

