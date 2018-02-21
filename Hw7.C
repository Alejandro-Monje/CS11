/************************************************************************************************************************************/
/* purpose: The purpose of this program is to show how many numbers there, dislpay the sum, and also the average of all the numbers.*/
/* Implemted by: Alejandro Monje*****************************************************************************************************/
/************************************************************************************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{

  int number;
  int amount = 0;
  int count = 0;
  ifstream inFile;
  ofstream outFile;
  inFile.open("Random.txt");
  outFile.open("output.txt");

  if ( !inFile)
    {
      cout << "File does not exist." << endl;
    }
  else
    {
      inFile >> number;
      while( inFile)
        {
          count++;
	    amount += number;
	    inFile >> number;
        }
      outFile << "There is " << count << " numbers in this file" << endl;
      outFile << "The sum is " << amount << endl;
      outFile << "The average is " << (double)amount/count << endl;
      inFile.close();
    }
  outFile.close();
	  return 0;
	}

