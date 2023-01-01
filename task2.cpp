#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void PrintMaze();


int main()
{
 system("cls");
 PrintMaze();
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
