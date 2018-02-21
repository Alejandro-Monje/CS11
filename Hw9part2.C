/*********************************************************/
/*Purpose: The pupose of this prgoram is to get the numbers from a file and assigns the values into an array. It has functions for reading the numbers, the total, average,a row total, a column total, a rows highest and a rows lowest */
/*Implemented By: Alejandro Monje */
/*Date; 11/11/15 */
/*User information; The user will input which row they want the highest from and also which row they want the lowest from. */
/*********************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
const int row = 12;
const int col = 4;
double readNum();
int getSum( int ar[][col], int row, int col, int& sum);
double getAvg(int ar[][col], int row, int col, int& sum);
int getCTotal(int ar[][col], int row, int col);
int getRTotal(int ar[][col], int row, int col);
int getHi(int ar[][col], int row, int col);
int getLo(int ar[][col], int row, int col);
int main()
{
  readNum();
  return 0;
}
double readNum()
{
  int final;
  int finalC;
  int finalR;
  int pickR;
  int pickRL;
  int num;
  int sum = 0;
  int ar[row][col];
  ifstream inFile;
  int number;
  int i = 0;
  inFile.open("2Dnumbers.txt");
  inFile >> number;
  while(inFile)
    {
      for(int i = 0; i < row; i++)
	{
        for(int a = 0; a < col; a++)
	  {
	    ar[i][a] = number;
            cout << number << " ";
	    inFile >> number;
	  }
	cout << endl;
	}
    }
  inFile.close();
  getSum(ar, row, col, sum);  
  getAvg(ar, row, col, sum);
  finalC = getCTotal(ar, row, col);
  cout << "The sum of the column you picked is " << finalC << endl;
  finalR = getRTotal(ar, row, col);
  cout << "The sum of the row you picked is " << finalR << endl;
  pickR = getHi(ar,row, col);
  cout << "The highest in the row you picked is " << pickR << endl;
  pickRL = getLo(ar, row, col);
  cout << "The lowest in the row you picked is " << pickRL << endl;

  return 0;
}
int getSum( int ar[][col], int row, int col, int& sum)
{
  sum = 0;
  for(int i = 0; i < row; i++)
    {
      for(int a = 0; a < col; a++)
	{
	  sum += ar[i][a];
	}
    }
  cout << "The sum is " << sum << endl;
  return sum;
}
double getAvg(int ar[][col], int row, int col, int& sum)
{
  double avg = 0;
  cout << fixed << setprecision(2);
  avg = (double)sum/(double)(row*col);
  cout << "The average is " << avg << endl;
  return avg;
}
int getCTotal(int ar[][col], int row, int col)
{
  int final = 0;
  int num;
  cout << "Enter the column you want the sum (from 1 to 4): " << endl;
  cin >> num;
  num = num - 1;
  for(int i = 0; i < row; i++)
    {
           final += ar[i][num];
    }
  return final;
}
int getRTotal(int ar[][col], int row, int col)
{
int final = 0;
int num;
cout << "Enter the Row you want the sum (from 1 to 4): " << endl;
cin >> num;
 num = num - 1;
for(int i = 0; i < col; i++)
  {
    final += ar[num][i];
  }
return final;
}
int getHi(int ar[][col], int row, int col)
{
  int hi; 
  int num;
  cout << "What row do you want the highest from (from 1 to 4): " << endl;
cin >> num;
num = num - 1;
hi = ar[num][0];
for( int i = i; i < col; i ++)
  { 
    if(ar[num][i] > hi)
      hi = ar[num][i];
  }
return hi;
}
int getLo(int ar[][col], int row, int col)
{
  int lo;
 int num;
cout << "What row do you want the lowest from (from 1 to 4): " << endl;
cin >> num;
num = num - 1;
lo = ar[num][0];
for( int i = i; i < col; i++)
  {
    if(ar[num][i] < lo)
      lo = ar[num][i];
  }
return lo;
}
