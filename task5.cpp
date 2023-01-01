#include <iostream>
#include <windows.h>
using namespace std;
void myName(char name);
void gotoxy(int x,int y);

main()
{
 char name;
 myName(name);
 gotoxy(15,15);
 
}
void myName(char name)
{
gotoxy(15,15);
cout << "          #####     ##      ##   #########      #####     ##      ##      #####      " << endl;
gotoxy(15,16);
cout << "         ##   ##     ##    ##    ##           ##     #    ##      ##     ##   ##     " << endl;
gotoxy(15,17);
cout << "        ##     ##     ##  ##     ##           ##          ##      ##    ##     ##    " << endl;
gotoxy(15,18);
cout << "       ###########     ####      #######       #######    ##########   ###########   " << endl;
gotoxy(15,19);
cout << "       ##       ##      ##       ##                  ##   ##      ##   ##       ##   " << endl;
gotoxy(15,20);
cout << "       ##       ##      ##       ##           #     ##    ##      ##   ##       ##   " << endl;
gotoxy(15,21);
cout << "       ##       ##      ##       #########     ######     ##      ##   ##       ##   " << endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X =x;
 coordinates.Y =y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}