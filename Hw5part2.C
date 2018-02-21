/**************************************************************/
/* purpose: The purpose of this program is to tell the user which package they have chosen as well as the price. */
/*Implemented by: Alejandro monje*/
/*Date: 10/4/14 */
/*User information: The user will enter the package letter, the minutes used using switch*/
/*Implentation Method:  The progream displays the package you have choosen and also the price using switch*/
/* Overview of subparts: All in int main*/
/*************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  const double packageA1 = 39.99;
  const double packageB1 = 59.99;
  const double packageC1 = 69.99;
  char package;
  double total;
  int  minUsed;
  const int min1 = 450;
  const int min2 = 900;
  const double PACKAGEAMORE = 0.45;
  const double PACKAGEBMORE = 0.40;
  char packageA = 'A';
  char packageB = 'B';
  char packageC = 'C';



  // choice of package, calculations, and minutes used 
  cout << "What Package did you purchase? Enter A, B, or C:" << endl;
  cin >> package;  
  if ((package != 'A')  && (package != 'B')  && (package != 'C'))
    
      cout << "The package you have entered is not valid." << endl;
    
  else
    {
      {
	cout << "How many minutes did you use?" << endl;
	cin >> minUsed;
      }
      if (minUsed < 0)
	
	  cout << "You have entered an invalid number." << endl;
	
      else//Inputs are good 

	// implentation of switch
       switch(package)
       {
       case 'A':            
	  if (package == 'A' && (minUsed <= 450))
	    {  
	      total = 39.99;
	      cout << "You have selected package A and your total this month is " << "$" << total << endl;
	    }
	  else 
	    {
	      total = packageA1 + (minUsed - min1) * PACKAGEAMORE;
	      cout << "You have selected package A and your total this month is " << "$" << total << endl;
            }
	  break;
	    case 'B':
	    
	  if ( package == 'B' && minUsed <= 900)
	    {
	      total = 59.99;
	      cout << "You have selected package B and your total this month is " << "$" << total << endl;
	    }
	  else 
	    {
	      total = packageB1 + (minUsed - min2) * PACKAGEBMORE;
	      cout << "You have selected package B and your total this month is " << "$" << total << endl; 
	    }
	      break;
            case'C': 
	      total = 69.99;
	      cout << "You have selected package C and your total this month is " << "$" << total << endl;
	      break;
	    default: cout << "You have entered an invalid package." << endl;
       }
    }
  return 0;
}


