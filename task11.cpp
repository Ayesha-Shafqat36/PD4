#include <iostream>
using namespace std;
void Speed(int num);
main()
{
   int num;
   cout << "Enter Speed=";
   cin >> num;
   Speed(num);
}
void Speed(int num)
{
 if (num > 100)
  {
   cout << "Halt.. You'll be challeged.";
  }
  if (num == 100)
  {
   cout << "Perfect.. You are going good.";
  }

}