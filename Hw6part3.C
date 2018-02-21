/****************************************************************/
/*Purpose: show A Sales bar chart using *.*/
/* Implemented by: Alejandro Monje*/
/* Date: 10/10/15 */
/* User information: Asks the user to put in values.*/
/***************************************************************/


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
  int store;
  int amount;
  int symbol;
  
cout << "Sales bar chart for five stores" << endl;
 cout << "(Each *= 100)" << endl;


  for(store = 1; store <= 5; store++)
    {  
      cout << "Enter the amount of sales for the store: " << store << ":";
      cin >> amount;
      cout << "Store " << store << ": ";
          
    for(symbol = 1; symbol <= amount/100; symbol++)
    {
     
      // It will display tha mount of stores divided by 100 for the amount of sales
      cout << "*";     
     
    }
  cout << endl;
    }
  return 0;
}
  
       
   
