/*********************************************************/
/*Purpose: The pupose of this prgoram is to get the numbers from a file and store them into an array. It should have functions for reading the numbers, getting the lowest number, getting the highest number, getting the sum and one for the average.*/
/*Implemented By: Alejandro Monje */
/*Date; 11/9/15 */
/*User information; The user wont enter anything*/
/********************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
const int BIG = 12;
int readNum(int ar[]);
int getLo(int ar[]);
int getHi(int ar[]);
int  getSum(int ar[], int BIG);
int getAvg(int ar[], int BIG);
int main()
{
 
  int ar[BIG];
  int num;
  int number;
  int amount;
  int count;
  int i = 0;
  int avg;
  readNum(ar);
  getSum(ar, BIG);
  getAvg(ar, BIG);
  getLo(ar);
  getHi(ar);


  return 0;
}
int readNum(int ar[])
{
  ifstream inFile;
  int num;
  int i = 0;
  inFile.open("numbers.txt");
  inFile >> num;
  while(inFile)
    {
      ar[i++] = num;
      cout << num << endl;
      inFile >> num;
    }
  inFile.close();
  return i;
}
int getSum(int ar[], int BIG)
{
     int sum = 0;
     for(int count = 0; count < BIG; count++)
       {
	 sum += ar[count];
       }
     cout << "The sum is " << sum << endl;
     return sum;
}
int getAvg(int ar[], int BIG)
{
  cout << fixed << setprecision(2);
  int i = 0;
  int sum = 0;
  int avg = 0;
  for(int count = 0; count < BIG; count++)
    {
      sum += ar[count];
      avg = sum/BIG;
    }
  cout << "The average is " << avg << endl;
  return avg;
}

int getHi(int ar[])
{
int count;
int hi;
hi = ar[0];
for (count = 0; count < BIG; count++)
  {
    if (ar[count] > hi)
      hi = ar[count];
  }
    cout << "The highest number is " << hi << endl;
    return hi;
}
int getLo(int ar[])
{
int count;
int lo;
lo = ar[0];
for (count = 0; count < BIG; count++)
  {
    if (ar[count] < lo)
      lo = ar[count];
  }
    cout << "The lowest number is " << lo << endl;
    return lo;
}
