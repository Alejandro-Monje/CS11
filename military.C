//
#include <iostream>
#include <string>
using namespace std;
void getInfo(string& name , char& gen , int& age);
bool verifyElig(char gen, int age);
void printLetter(string name,int age, bool& verify);
int main()
{
  string name;
  char gen;
  int age;
  bool verify;
  getInfo(name, gen, age);
  verify = verifyElig(gen, age);
  printLetter(name, age, verify);
  return 0;
}

void getInfo(string& name , char& gen , int& age)
{
  cout << "Enter your name:" << endl;
  cin >> name;
  cout << "Enter your gender by using (m or f):" << endl;
  cin >> gen;
  cout << "Enter your age:" << endl;
  cin >> age;
}
bool verifyElig(char gen, int age)
{     
  bool verify;

  if((gen == 'M' || gen == 'm') && age >= 18)
    {
      verify = true;
      cout << "Eligible" << endl;
    }
  if((gen == 'M' || gen == 'm') && age < 18)
    {
      verify = false; 
      cout << "Not Eligible" << endl;
    }
  else if(gen == 'F' || gen == 'f')
    {
     verify = false;
     cout << "Not eligible." << endl;
    }
    
  return verify;
}
void printLetter(string name, int age, bool& verify)
{
  if(verify == true && age >= 18)
    {
    cout << "Dear " << name << " please join the military." << endl;
    }
  else if(verify == false)
    {
    cout << "Thank you for applying." << endl;
    }
    
}

