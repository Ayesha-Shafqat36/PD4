#include <iostream>
using namespace std;
void Pakistan(int price, string country);
void Ireland(int price, string country);
void India(int price, string country);
void England(int price, string country);
void Canada(int price, string country);

main()
{
  int price;
  string country;
  while(true)
{
  cout << "Enter Price In Dollars=";
  cin >> price;
  cout << "Enter Country Name:";
  cin >> country;
  
  if (country == "pakistan")
   {
    Pakistan(price,country);
   }
 if (country == "ireland")
   {
    Ireland(price,country);
   }
 if (country == "india")
   {
    India(price,country);
   }
 if (country == "england")
   {
    England(price,country);
   } 
  if (country == "canada")
   {
    Canada(price,country);
   }
 }
}
void Pakistan(int price, string country)
{
  int percent;
  percent=(price*5)/100;
  int Pprice;
  Pprice=price-percent;
  cout << "Final Price="<< Pprice <<endl;
}
void Ireland(int price, string country)
{
  int IrPercent;
  IrPercent=(price*10)/100;
  int IrPrice;
  IrPrice=price-IrPercent;
  cout << "Final Price="<< IrPrice<<endl;
}
void India(int price, string country)
{
  int InPercent;
  InPercent=(price*20)/100;
  int InPrice;
  InPrice=price-InPercent;
  cout << "Final Price="<< InPrice<<endl;
}
void England(int price, string country)
{
  int EnPercent;
  EnPercent=(price*30)/100;
  int EnPrice;
  EnPrice=price-EnPercent;
  cout << "Final Price="<< EnPrice<<endl;
}
void Canada(int price, string country)
{
  int CaPercent;
  CaPercent=(price*45)/100;
  int CaPrice;
  CaPrice=price-CaPercent;
  cout << "Final Price="<< CaPrice<<endl;
}