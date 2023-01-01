#include <iostream>
using namespace std;
void disPrice(float total);
main()
{
  float red;
  float white;
  float tulip;
  float total;
  cout << "Red Roses=";
  cin >> red;
  cout << "White Roses=";
  cin >> white;
  cout << "Tulips=";
  cin >> tulip; 
 
  total=red*2+white*4.10+tulip*2.50;
  cout << "Total Amount=" << total <<endl; 
  
if (total > 200)
  {
   disPrice(total);
  }
}

void disPrice(float total)
{
 float discount;
 float Pdiscount;
 discount=(total*20)/100;
 Pdiscount=total-discount;
 cout << "Amount after discount=" << Pdiscount;
}
