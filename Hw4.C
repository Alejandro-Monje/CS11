/* PURPOSE: display movie name, prices, gross total paid to box office, the net total for box office, and the amount paid to the distributor
IMPLEMENTED BY: Alejandro Monje
DATE: 9/22/2015
The user will input the movie name, the number of adult tickets sold and the number of children tickests sold. The output will be the movie name in quatations, the number of tickets sold the gross amount that the box office made, the net amount that box office made and also the amount paid to the distributor.
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
 
  // variables and data types
  string movieName; 
  int adultTickets;
  int childTickets;
  double totalFromAdults;
  double totalFromChilds;
  double price;
  double grossTotal;
  double boxTotal;
  double amountPaid;
  const double PERCENTHELD = .20;
 
  // Information for the user to put in.
  cout << "Enter the name of the movie: " << endl;
  getline (cin, movieName);
  cout << "Enter adult tickets sold: " << endl;
  cin >> adultTickets;
  cout << "enter child tickets sold: " << endl;
  cin >>  childTickets;
 
 //Calulations
 totalFromAdults = adultTickets * 10.00;
 totalFromChilds = childTickets * 6.00;
 grossTotal = totalFromAdults + totalFromChilds;
 boxTotal = grossTotal * PERCENTHELD;
 amountPaid = grossTotal - boxTotal;
 
 // Formating
 cout << setprecision(2) << fixed;
 cout << left << setw(30) << "Movie Name:" << "\"" << movieName << "\"" << endl;
 cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(4) << adultTickets << endl;
 cout << left << setw(30) << "Child Tickets Sold:" << right << setw(4) << childTickets << endl;
 cout << left << setw(30) << "Gross Box Office Profit:" << "$" << right << setw(7) << grossTotal << endl;
 cout << left << setw(30) << "Net Box Office Profit:" << "$" << right << setw(7) << boxTotal << endl;
 cout << left << setw(30) << "Amount Paid to Distributor:" << "$" << right << setw(7) << amountPaid << endl;
 return 0; 
}





