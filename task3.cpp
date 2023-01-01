#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void PrintMaze();
void playermove(int x,int y);

int main()
{
 system("cls");
 PrintMaze();
 int x =3;
 int y =3;
 playermove(x,y);
}

void PrintMaze()
{
  cout << "##################################" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "#                                #" <<endl;
  cout << "##################################" <<endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void playermove(int x,int y)
{
   gotoxy(x-1,y);
   cout << " ";
   gotoxy(x,y);
   cout << "P";
   Sleep(200);
}
