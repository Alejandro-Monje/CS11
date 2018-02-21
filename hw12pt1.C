/******************************************************/
/*purpose: The program will print a word backwords*/
/*Implemted by: Alejandro Monje*/
/*Date: 12/6/15*/
/*User information: The user will input the word*/
/*****************************************************/
#include <iostream>
#include <string>
using namespace std;
void reversestring(string a);
int main()
{
  string a;
  cout << "Enter you word: " << endl;
  cin >> a;
  cout << endl;

  reversestring(a);
  cout << endl;
  return 0;
}
void reversestring(string a)
{
  if(a == "")
    {
    return;
    }
  else
    {
      cout << a[a.length() - 1];
      reversestring(a.substr(0, a.length() - 1));
   
    }
}
