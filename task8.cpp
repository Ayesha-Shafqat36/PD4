#include <iostream>
using namespace std;
void EqualOrNot(int num1,int num2);
main()
{
 int num1;
 int num2;
 cout << "Enter number 1=";
 cin >> num1;
 cout << "Enter number 2=";
 cin >> num2;
 EqualOrNot(num1,num2);
}

void EqualOrNot(int num1,int num2)
{
  if (num1 == num2)
  {
   cout << "True"<<endl;
  }
  if (num1 != num2)
  {
   cout << "False" << endl;
  }
}