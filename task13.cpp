#include<iostream>
using namespace std;

void catRest(int holidays,int workingdays,int workingdaysPlay,int holidaysPlay,int difference,int timeForPlay);

main()
{
  int holidays;
  int workingdays;
  int workingdaysPlay;
  int holidaysPlay;
  int difference;
  int timeForPlay;

  cout<<"ENTER NUMBER OF HOLIDAYS=";
  cin>>holidays;
  cout<<endl;
  workingdays=365-holidays;
  workingdaysPlay=workingdays*63;
  holidaysPlay=holidays*127;
  timeForPlay=workingdaysPlay+holidaysPlay;
  difference=30000-timeForPlay;
  cout<<"THE DIFFERANCE FROM THE NORM IS="<<difference<<endl;
  catRest(holidays,workingdays,workingdaysPlay,holidaysPlay,difference,timeForPlay);
}

void catRest(int holidays,int workingdays,int workingdaysPlay,int holidaysPlay,int difference,int timeForPlay)
{
  if(difference>0)
  {
    cout<<"TOM NEEDS TO SLEEP";
  }
  if(difference<0){
    cout<<"TOM SLEEPS WELL";
  }
}
