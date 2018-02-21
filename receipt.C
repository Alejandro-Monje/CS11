// This program will make a receipt.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  string date;
  string name;
  string item;
  double priceOfItem;
  double salesTax;
  double total;
  const double TAXRATE = .0775;


  cout << "Enter sales person's name:" << endl;
  getline(cin, name);
  cout << "Enter today's date:" << endl;
  cin >> date;
  cout << "Enter the item's name:" << endl;
  cin >> item;
  cout << "Enter the price of the item:" << endl;
  cin >> priceOfItem;

  // Calculations
  salesTax = priceOfItem * TAXRATE;
  total = priceOfItem + salesTax;
 

  cout << "-------------------------------" << endl;
  cout << "\"Your friendly Neighbor Store\"" << endl;
  cout << setw(31) << date << endl;
  cout << setw(31) << name << endl;
  cout << setprecision(2) << fixed;
  cout << left << setw(20) << item << "$" << right << setw(10) << priceOfItem << endl;
cout << left << setw(20) << "Sales tax" << "$" << right << setw(10) << salesTax << endl;
cout << left << setw(20) << "total" << "$" << right << setw(10) << priceOfItem\
 + salesTax << endl;
 cout << "-------------------------------" << endl;
 cout << "Thank you for shopping with us!" << endl;
 return 0;
}



  
