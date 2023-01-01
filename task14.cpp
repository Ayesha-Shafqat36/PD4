#include<iostream>
using namespace std;
void print();
void detail();
main()
{
  int option;
  string std1;
  string std2;
  int matric_1;
  int matric_2;
  int inter_1;
  int inter_2;
  int ecat1;
  int ecat2;
  float aggregate1;
  float aggregate2;
  print();
  while(true)
 {

  cout<<"SELECT ONE OF THE FOLLOWING GIVEN OPTION......";
  cin>>option;
  cout << endl;

  if(option == 1)
  {
    cout<<"ENTER FIRST STUDENT'S NAME=";
    cin>>std1;
    cout << endl;
    cout<<"ENTER FIRST STUDENT'S MATRIC MARKS(OUT OF 1100)=";
    cin>>matric_1;
    cout << endl; 
    cout<<"ENTER FIRST STUDENT'S INTER MARKS(OUT OF 550)=";
    cin>>inter_1;
    cout << endl;
    cout<<"ENTER FIRST STUDENT'S ECAT MARKS(OUT OF 400)=";
    cin>>ecat1;
    cout << endl;
    }
  if(option == 2)
  {
    cout<<"ENTER SECOND STUDENT'S NAME=";
    cin>>std2;
    cout << endl;
    cout<<"ENTER  SECOND STUDENT'S MATRIC MARKS(OUT OF 1100)=";
    cin>>matric_2;
    cout << endl;
    cout<<"ENTER  SECOND STUDENT'S INTER MARKS(OUT OF 550)=";
    cin>>inter_2;
    cout << endl;
    cout<<"ENTER  SECOND STUDENT'S ECAT MARKS(OUT OF 400)=";
    cin>>ecat2;
    cout << endl;
   }

  if(option == 3)
  {
    aggregate1=(matric_1/1100.0)*30.0+(inter_1/550.0)*30.0+(ecat1/400.0)*40.0;
    cout<<"OUR AGGREGATE IS "<<aggregate1<<endl;
  }


  if(option == 4)
  {
    aggregate2=(matric_2/1100.0)*30.0+(inter_2/550.0)*30.0+(ecat2/400.0)*40.0;
    cout<<"our second aggregate is"<<aggregate2<<endl;
  }

  if(option == 5)
   {
	if(aggregate1>aggregate2)
   {
      cout<<"FIRST STUDENT IS 1ST...";
      cout<<"SECOND STUDENT IS 2ND...";
      cout << endl;
    }
     if(aggregate1<aggregate2)
     {
	cout<<"SECOND STUDENT IS 1ST...";
	cout<<"FIRST STUDENT IS 2ND...";
        cout << endl;
     } 
    
}	
}
}

void print()
{
cout<<"*************************************************************************"<<endl;
cout<<"*                  					               *"<<endl;
cout<<"*                  					               *"<<endl;
cout<<"*                  University of Engineering and Technology             *"<<endl;
cout<<"*                  					               *"<<endl;
cout<<"*                						       *"<<endl;
cout<<"*************************************************************************"<<endl;

}
void detail()
{
cout<<"1. First Student Reocrd : "<<endl;
cout<<"2. Second Student Record : "<<endl;
cout<<"3. Aggregate1  : "<<endl;
cout<<"4. Aggregate2 : "<<endl;
cout<<"5. Compare aggregates : "<<endl;
}

	
