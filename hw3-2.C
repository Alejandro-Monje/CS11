
      // This program will display the prices of the five items in five variables aswell as the subtotal of the sale and the amount of sales tax.

#include <iostream>
      using namespace std;

    int main()
    {
      double item1 = 15.95;
      double item2 = 24.95;
      double item3 = 6.95;
      double item4 = 12.95;
      double item5 = 3.95;
      const double SALES_RATE = .07;

      double subTotal =  item1 + item2 + item3 + item4 + item5;
      double amount_of_sales_tax  = SALES_RATE * subTotal;
      double total = amount_of_sales_tax + subTotal;

      cout << "The cost of item1 is? " << endl;
      cin >> item1;
      cout << "The cost of item2 is? " << endl;
      cin >> item2;
      cout << "The cost of item3 is? " << endl;
      cin >> item3;
      cout << "The cost of item4 is? " << endl;
      cin >> item4;
      cout << "The cost of item5 is? " << endl;
      cin >> item5;
      cout << "The subtotal is " << subTotal << "." << endl;
      cout << "The amount of sales tax is " << amount_of_sales_tax << "." << endl;
  cout << "The total is " << total << "." << endl;
      return 0;
    }
