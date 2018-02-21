/****************************************************************/
/*Purpose: Ask the user to input the employee number, gross pay, state tax, federal tax, and FICA withholdings. Then it will display a report of the totals and also the amounts. */
/* Implemented by: Alejandro Monje*/
/* Date: 10/10/15 */
/***************************************************************/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

  double employeeN;
  double grossP;
  double stateTax;
  double fedTax;
  double FICAN;
  double netPay;

    cout << "Enter the employee number: " << endl;
    cin >> employeeN;
    while (employeeN != 0)
      {
    cout << "Enter gross pay: " << endl;
    cin >> grossP;
    cout << "Enter the state tax: " << endl;
    cin >> stateTax;
    cout << "Enter the federal tax: " << endl;
    cin >> fedTax;
    cout << "Enter FICA withholdings: " << endl;
    cin >> FICAN;
        
    netPay = grossP - (stateTax + fedTax + FICAN);
      

	if ( grossP < 0 || stateTax < 0 || fedTax < 0 || FICAN < 0 || netPay < 0) 
	   {
	      /* user re-enters number if they used wrong numbers*/
	      cout << "You have entered invalid numbers please re-enter numbers " << endl;
	      cout << "Enter employee number one more time: " << endl;
	      cin >> employeeN;

	    }
        else
          {
        cout << "Report" << endl;
        cout << "The employee number is " << employeeN << endl;
        cout << "Your gross pay is" << setw(30) << right << "$" << grossP << endl;
        cout << "The state tax withholdings is" << setw(18) << right << "$" << stateTax << endl;
        cout << "The federal tax withholdings is" << right << setw(16) << "$" << fedTax << endl;
        cout << "Your FICA withheld is" << setw(26) << right << "$" << FICAN << endl;
        cout << "Your net pay is" << setw(32) << right << "$" << netPay << endl;
        cout << "Enter employee number one more time: " << endl;
        cin >> employeeN;

	  }
      }
    /* use of the second while */
	while ( employeeN != 0 )
	  {
        cout << "Enter gross pay: " << endl;
	cin >> grossP;
	cout << "Enter the state tax: " << endl;
	cin >> stateTax;
	cout << "Enter the federal tax: " << endl;
	cin >> fedTax;
	cout << "Enter FICA withholdings: " << endl;
	cin >> FICAN;

        if (grossP < stateTax + fedTax + FICAN)
	  {
	    /* user re-enters number if they used wrong numbers*/
	    cout << "You have entered invalid numbers please re-enter numbers " << endl;
	    cout << "Enter employee number one more time: " << endl;
	    cin >> employeeN;

	  }
	else
          {
	    cout << "Report" << endl;
	    cout << "The employee number is " << employeeN << endl;
	    cout << "Your gross pay is" << setw(30) << right << "$" << grossP << endl;
	    cout << "The state tax withholdings is" << setw(18) << right << "$" << stateTax << endl;
	    cout << "The federal tax withholdings is" << right << setw(16) << "$" << fedTax << endl;
	    cout << "Your FICA withheld is" << setw(26) << right << "$" << FICAN << endl;
	    cout << "Your net pay is" << setw(32) << right << "$" << netPay << endl;
	    cout << "Enter employee number one more time: " << endl;
	    cin >> employeeN;

          }
   
	  }
  
  return 0;
}
