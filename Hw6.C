xc/****************************************************************/
/*Purpose: Calculate the sum of two numbers entered by the user.*/
/* Implemented by: Alejandro Monje*/
/* Date: 10/10/15 */
/***************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double firstNumber;
double secondNumber;
double sum;
 char letter;
 
 do
  {
cout << "Enter the first number:" << endl;
  cin >> firstNumber; 
cout << "Enter the second number: " << endl;
cin >> secondNumber;
 sum = firstNumber + secondNumber;
	cout << "The sum of the two numbers is: " << sum << endl;
	cout << "Do you want to keep going? Enter y for yes and n for no:" << endl;
        cin >> letter;
  }while ( letter == 'y' || letter == 'Y' );
     return 0;
}
