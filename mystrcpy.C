#include <iostream>
#include <string>
using namespace std;
void mystrcpy(const char source[], char dest[]);
int main()
{
  char st1[20] = "Hello";
  char st2[20] = "university";
  mystrcpy(st1, st2);
  cout << st2 << endl;
  return 0;
}
void mystrcpy(const char source[], char dest[])
{
  int i;
  for( i = 0; source[i] != '\0'; i++)
    {
      dest[i] = source[i];
    }
  dest[i] = '\0';
}
