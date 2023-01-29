#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x ,int y);
void clear (int x , int y ,char previous);
void clear2(int x1,int y1, char previous2);
void showPacMan(int x , int y);
void showGhost (int x , int y);
void showGhost2(int x1 ,int  y1);
char getCharAtxy (short int x , short int y);
main()
{
    int gx = 1;
    int gy = 1;
    int gx1 = 1;
    int gy1 = 2;
    string direction = "right";
    string direction2 = "up";
    char previousChar = ' ';
    char previousChar2 = ' ';
    system("cls");
    printMaze();
    showGhost(gx, gy);
    while (true)
    {
        Sleep(100);
    if (direction == "right")
    {
        char nextLocation = getCharAtxy (gx + 1,gy);
        if (nextLocation == '%')
        {
            direction = "left";
        }
        else if (nextLocation ==' ' || nextLocation == '.')
        {
            clear (gx ,gy ,previousChar);
            gx =gx + 1;
            previousChar = nextLocation;
            showGhost (gx,gy);
        }
    }
        if(direction == "left")
        {
            char nextLocation = getCharAtxy (gx - 1,gy);
            if (nextLocation == '%')
            {
                direction = "right";
            }
            else if (nextLocation ==' ' || nextLocation == '.')
            {
                clear (gx,gy , previousChar);
                gx = gx - 1;
                previousChar = nextLocation ;
                showGhost(gx,gy);
            }
        }
        if (direction2 == "up")//
       {
        char nextLocation = getCharAtxy (gx1 ,gy1 + 1);
        if (nextLocation == '%')
        {
            direction2 = "down";
        }
        else if (nextLocation ==' ' || nextLocation == '.')
        {
            clear2 (gx1 ,gy1 ,previousChar2);
            gy1 =gy1 + 1;
            previousChar2 = nextLocation;
            showGhost2 (gx1,gy1);
        }
    }
        if(direction2 == "down")//
        {
            char nextLocation = getCharAtxy (gx1,gy1 - 1);
            if (nextLocation == '%')
            {
                direction2 = "up";
            }
            else if (nextLocation ==' ' || nextLocation == '.')
            {
                clear2 (gx1,gy1 , previousChar2);
                gy1 = gy1 - 1;
                previousChar2 = nextLocation ;
                showGhost2(gx1,gy1);
            }
        }
    }


}
void printMaze()
{
 cout <<"##############################"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "%                            %"<< endl;
cout << "##############################"<< endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void clear(int x,int y, char previous)
{
    gotoxy(x,y);
    cout << previous;
}
void clear2(int x1,int y1, char previous2)
{
    gotoxy(x1,y1);
    cout << previous2;
}
void showGhost(int x,int y)
{
    gotoxy(x,y);
    cout << "G";
}
void showGhost2(int x1,int y1)
{
    gotoxy(x1 ,y1 +3);
    cout << "G";
}
char getCharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x , y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
