//
#include <iostream>
#include <iomanip>
using namespace std;
void getCustomerInfo(int& accntN, int& month, int& day, int& year, char& countyCode);
void getItemInfo( double& totalPAmount,double &totalW);
double calcDiscount(int month, double totalPAmount);
double Salestax(char countyCode, double discount, double totalPAmount);
double calcShipping(double totalW);
void output(int accntN, char countyCode, int month, int day, int year, double& totalPAmount, double& totalSAmount, double& discount, double& tax1, double final);
int main()
{
  int accntN;
  int month;
  int day;
  int year;
  char s;
  char o;
  char l;
  char countyCode;
  double shipping;
  double shipping1;
  double shipping2;
  double shipping3;
  double price;
  double wieght;
  double sumP;
  double totalPAmount;
  double totalSAmount;
  double totalW;
  double discount;
  double tax1;
  double flatrate;
  double final;
  getCustomerInfo(accntN, month, day, year, countyCode);
  getItemInfo(totalPAmount, totalW);
  discount = calcDiscount(month,  totalPAmount);
  tax1 = Salestax(countyCode, discount, totalPAmount);
  totalSAmount = calcShipping(totalW);
  discount = calcDiscount(month, totalPAmount);
  output(accntN, countyCode, month, day, year, totalPAmount, totalSAmount, discount, tax1, final);
}

void getCustomerInfo (int& accntN, int& month, int& day, int& year, char& countyCode)
{
  cout << setprecision(2);
  cout << "Enter acoount number:" << endl;
  cin >> accntN;
  cout << "Enter month:" << endl;
  cin >> month;
  cout << "Enter day:" << endl;
  cin >> day;
  cout << "Enter year:" << endl;
  cin >> year;
  cout << "Enter County Code (s, o, or l):" << endl;
  cin >> countyCode;
}
void getItemInfo(double& totalPAmount,double& totalW)
{
  double price;
  double wieght;
  char choice;
  cout << "Do you want to order an item? (Enter Y or N:)" << endl;
  cin >> choice;
  while(choice == 'Y' || choice == 'y')
    {
      cout << "Enter the price of the item:" << endl;
      cin >> price;
      cout << "Enter the wieght of the item:" << endl;
      cin >> wieght;
      totalPAmount += price;
      totalW += wieght;
      cout << "Do you want to order another item? (Enter Y or N:)" << endl;
      cin >> choice;   
    }
}
double calcDiscount(int month, double totalPAmount)
{
  double discount;
  if(month >= 0 && month <= 5)
    discount = totalPAmount * 0.05 ;
  else if(month >= 6 && month <= 8)
    discount = totalPAmount * 0.10;
  else if(month >= 9 && month <=12)
    discount = totalPAmount * 0.15;
  return discount;
}
double Salestax(char countyCode, double discount, double totalPAmount)
{
   double S = 0.0775;
   double O = 0.0775;
   double L = 0.0825;
  double tax1;
  if((countyCode == 'S')||(countyCode == 's'))
    {
      tax1 = (totalPAmount -discount)*S;
    }
  else if((countyCode == 'O')||(countyCode == 'o'))
    {
      tax1 = (totalPAmount -discount)*O;
    }
  else if((countyCode == 'L')||(countyCode == 'l'))
    {
      tax1 = (totalPAmount -discount)*L;
    }
  return tax1;
}

double calcShipping(double totalW)
{
  double shipping, shipping1, shipping2, shipping3;
  shipping1 = 5.00;
  shipping2 = shipping1 + ((totalW-25)*0.10);
  shipping3 = shipping1 + 2.50 + ((totalW-50)*0.07);
  if((totalW > 0)&&(totalW <= 25))
    {
      shipping = shipping1;
    }
  else if((totalW >= 26)&&(totalW <= 50))
    {
      shipping = shipping2;
    }
  else if(totalW > 50)
    {
      shipping = shipping3;
    }
  return shipping;
}

void output(int accntN, char countyCode, int month, int day, int year, double& totalPAmount, double& totalSAmount, double& discount, double& tax1, double final)
{
  cout << left << setw(25) << "Account number " << right << setw(12) << "County " << endl;
  if((countyCode == 'S')||(countyCode == 's'))
    cout << left << setw(25) <<  accntN << right << setw(12) << "San Diego " << endl;
  else if((countyCode == 'O')||(countyCode == 'o'))
    cout << left << setw(25) <<  accntN << right << setw(12) << "Orange County " << endl;
  else if((countyCode == 'L')||(countyCode == 'l'))
    cout << left << setw(25) <<  accntN << right << setw(12) << "Los Angeles " << endl;
  cout << endl;

  cout <<"Date " << month << "/" << day << "/" << year << endl;
  cout << "Total sale Amount" << setw(11) << right << "$ " << fixed << setprecision(2) << setw(5) << right <<  totalPAmount << endl;
  cout << "Discount" << setw(20) << right << "$ " << fixed << setprecision(2) << setw(6) << right << discount << endl;
  cout << "Total sale tax" << setw(14) << right << "$ " << fixed << setprecision(2) << setw(6) << right <<  tax1 << endl;
  cout << "Shipping" << setw(20) << right << "$ " << setprecision(2) << setw(6) << right << totalSAmount << endl;
  final = totalSAmount + tax1 + totalPAmount - discount;
  cout << "Total due" << setw(19) << right << "$ " << fixed << setprecision(2) << setw(5) << right << final << endl;
}
