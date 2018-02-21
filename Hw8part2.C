/*********************************************************************************************************/
/*Implemented by:Alejandro Monje**************************************************************************/
/*Date:10/26/15*******************************************************************************************/
/*Purpose: This prgram will calculate the average days missed by the emplyees.****************************/
/*User Information: The user will enter the number of emplyoees and how many each missed.*****************/
/*********************************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int numOfemployees();
int numDays( int);
double avgDaysAbs(int, int);
int main()
{
  int numberEmployees;
  int numberOfDays = 0;
  double avgDaysabsent;
  numberEmployees = numOfemployees();
 numberOfDays = numDays( numberEmployees);
  avgDaysabsent = avgDaysAbs( numberEmployees,  numberOfDays);
  cout << "The average of days the employees were absent:" << avgDaysabsent << endl;

  return 0;
}
int numOfemployees()
{

  int numberEmployees;
      do
	{
	  cout << "How many employees are there(must be 1 or more):" << endl;
      cin >> numberEmployees;
      if( numberEmployees < 1)
	cout << "Invalid please re-enter values." << endl;
	}
      while( numberEmployees < 1);
    

cout << "The number of employees is " << numberEmployees << endl;
return numberEmployees;

}
int numDays( int numberEmployees)
{
  int numberOfDays;
 int total = 0;
 int count = 0;
 while(numberEmployees != 0)
   {
	  cout << "Enter how many days each emplyee missed last year.(must be greater than 0)" << endl;
	  cin >> numberOfDays;
	  while( numberOfDays < 0)
	    {
	      cout << "Invalid please re-enter values." << endl;
	      cin >> numberOfDays;
	    }

	  total = numberOfDays + total;
          numberEmployees--;
          count++;
   }
  cout << "The number of days missed is " << total << endl;
return total;

}
double avgDaysAbs(int numberEmployees, int numberOfDays)
{
 
  double avgDaysabsent;
  avgDaysabsent = (double)(numberOfDays)/(numberEmployees);
  return avgDaysabsent;
}
