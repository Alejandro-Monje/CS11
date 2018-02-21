/********************************************************************************/
/*Purpose: To display a menu that allows the user to choose what they want to do with the options provided*/
/*Implemted by: Alejandro Monje */
/*Date: 11/29/15*/
/*User information: The user will pick one of the options*/
/********************************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
const int size = 10;

struct customerinfo
{
  string name;
  string address;
  string city;
  string state;
  string zip;
  string telephone;
  string number;
  string datelastpayment;
  double balance;
};

void readFile(customerinfo ar[]);
void showArray(customerinfo ar[]);
string searchPname(customerinfo ar[],string portion);
int main()
{
  string portion;
  customerinfo ar[size];
  int i = 0;
  int pick;
  int ans;
  readFile(ar);
  cout << "In Menu" << endl;

  cout << "1: Read customers. info from file customers.txt to the array:" << endl;
  cout << "2: Change the account information for a given customer: (Identify the customer by name)" << endl;
  cout << "3: Display all the data stored in the array:" << endl;
  cout << "4: Search for a particular customer.s account:" << endl;
  cout << "5: Sort information according to the customer.s balances in descending order:" << endl;
  cout << "6: Sort the information according to the customer.s names in ascending order:" << endl;
  cout << "7: Compare the names of two given customers, and replace the address of smaller name with the address of larger name, and return the length of new address:" << endl;
  cout << "8: Exit the program:" << endl;
  do 
    {
  cout << "Pick a number between 1 and 7 or pick 8 to exit" << endl;
  cin >> pick;
  cout << endl;
  switch(pick)
    {
    case 1: readFile(ar);
          cout << "The array was just filled" << endl;
      break;
    case 2:
      break;
    case 3: showArray(ar);
      break;
    case 4: searchPname(ar, portion);
      break;
    case 5: 
      break;
    case 6: ;
      break;
    case 7: ;
      break;
    case 8: cout << "The program is about to end" << endl;
      break;
    default: cout << "Invalid pick" << endl;
    }
    }while(ans != 8);
  return 0;
}

void readFile(customerinfo ar[])
{
 
  int i = 0;
  ifstream inFile;
  inFile.open("customers.txt");  
 if(!inFile)
    {
      cout << "The file does not exist:" << endl;
    }
 do
   {
      inFile >> ar[i].name >> ar[i].address >>  ar[i].city >>  ar[i].state >>  ar[i].zip >>  ar[i].telephone >>  ar[i].number >>  ar[i].datelastpayment >> ar[i].balance;
      i++;
   }while(inFile && i < size);
  inFile.close();
}
void showArray(customerinfo ar[])
{
  for(int i = 0; i < size; i++)
    {
      cout << left << setw(15) << ar[i].name << setw(15) << ar[i].address << setw(15) << ar[i].city << setw(15) << ar[i].state << setw(15) <<  ar[i].zip << setw(15) <<  ar[i].telephone << setw(15) << ar[i].number << setw(15) <<  ar[i].datelastpayment << setw(15) << ar[i].balance << endl;
    }
}
string searchPname(customerinfo ar[],string portion)
{
 string name;
 cout << "Enter the name:" << endl;
 cin >> name;
 cout << "Enter the part of a name:" << endl;
 cin >> portion;
 cout << endl;
 if(name.find(portion) >= 0 && name.find(portion) < name.length())
   {
   cout << portion << " is found" << name << endl;
   }
 else
   {
   cout << portion << " is not found in" << name << endl; 
   }
 return 0;
}
