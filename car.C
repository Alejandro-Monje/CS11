//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{

  int miles;
  int gallons;
  double total1 = 0;
  int totalm = 0;
  int totalG = 0;
  double avgmpg = 0;
  string name1;
  double  mpg;
  int count = 0;
  ifstream inFile;
  ofstream outFile;
  inFile.open("car.dat");
  outFile.open("carResult.dat");
  double totalmpg = 0;
  if ( !inFile)
    {
      cout << "File does not exist." << endl;
    }
  else
  
    {
      outFile << setw(15) << left << "Model Name " << setw(20) << right << " Miles Driven" << setw(25) << right << " Gallons of Gas Used" << setw(8) << right << " MPG" << endl;
      inFile >> name1 >> miles >> gallons;

      while( inFile)
        {
          
          totalm += miles;
          totalG += gallons;
          mpg = (double)miles/gallons;
          totalmpg += mpg;
          total1 = mpg;
          count++;
      	  outFile << fixed << setprecision(2) << setw(10) << left << name1 << setw(20) << right << miles << setw(20) << right << gallons << setw(20) << right << mpg << endl;
	  inFile >> name1 >> miles >> gallons;

        }
      if(count != 0)
	{
              outFile << "Total Miles Driven is " << totalm << " miles" << endl;
	      outFile << "Total Gallons used is " << totalG << " gallons" << endl;
	      outFile << "The average mpg is " << totalmpg/count << " miles per gallon" << endl;


	  
	}
      else
	{
	  outFile << "carResult.dat";
	  cout << "There is nothing in the file." << endl;

	}
          inFile.close();

	
    }
  outFile.close();


  return 0;
}


