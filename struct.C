#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct employee
{
  string fName;
  string lName;
  char gen;
  double hourlyR;
  int id;
  int age;
};
const int Max_Emp = 100;
int readData(employee empAr[]);
void findMale(employee empAr[], int num);
bool findEmp(employee empAr[], int num);
employee findOld(employee empAr[], int num);
void prints(employee print);

int main()
{
  employee old;
  int i;
  int num = 0;
  employee empAr[Max_Emp];
  num = readData(empAr);
  findMale(empAr, num);
  cout << "There are " << num << " emplyees." << endl;
  cout << endl;
  findEmp(empAr, num);
  cout << endl;
  cout << "The oldest employee is " << endl;
  old = findOld(empAr, num);
  cout << endl;
  prints(old);
  cout << endl;
}
int readData(employee empAr[])
{
   int num = 0;
  ifstream inFile;
  inFile.open("employees.dat");
 
  if (!inFile)
   {
     cout << "File does not exist." << endl;
   }
 else 
   {
     inFile >> empAr[num].fName >> empAr[num].lName >> empAr[num].gen >> empAr[num].hourlyR >> empAr[num].id >> empAr[num].age;
     while(inFile)
      {
	num++;
	inFile >> empAr[num].fName >> empAr[num].lName >> empAr[num].gen >> empAr[num].hourlyR >> empAr[num].id >> empAr[num].age;

      }
   }
    inFile.close();
    return num;
}
void findMale(employee empAr[], int num)
{
  int i;
  ofstream outFile;
  outFile.open("maleOut.dat");

 for(int i = 0; i < num; i++)
   {
   if(empAr[i].gen == 'M')
     {
       outFile << left << setw(10) << empAr[i].fName << setw(10) << empAr[i].lName << setw(10) <<  empAr[i].id << endl;
     }
   }
 outFile.close();
 
}
bool findEmp(employee empAr[], int num)
{
  int empId;
  int i;
  cout << "Enter the employee id: " << endl;
  cin >> empId;
  bool found = false;
  for(int i = 0; !found && i < num; i ++)
   {
     if(empId == empAr[i].id)
       {
	 cout << left << setw(10) << empAr[i].fName << setw(10) << empAr[i].lName << endl;         
	 found = true;
       }
   }
  if(found == false)
       {
         cout << "The employee id " << empId << " was not found " << endl;
       }
   
  return found;
}
employee findOld(employee empAr[], int num)
{
  int old;
  int p = 0;
  old = empAr[0].age;
  for(int i = 0; i < num; i++)
    {
      if(empAr[i].age > old)
	{
	  old = empAr[i].age;
	  p = i;
	}
    }
  cout << left << setw(10) << empAr[p].fName << endl;
  return empAr[p];
}
void prints(employee print)
{
  cout << left << setw(10) << print.fName << setw(10) << print.lName << setw(10) << print.gen << setw(10) << print.hourlyR << setw(10) << print.id << setw(10) << print.age;
}
