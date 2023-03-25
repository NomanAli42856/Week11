#include<iostream>
#include<windows.h>
using namespace std;

void topHeader();
void temptopHeader();
void maze();
void gotoxy(int , int);
char Getch(short int x,short int y);
void printsquare(int x, int y);
void printrectangle(int x, int y);
void erase(int x, int y);
void square();
int score = 0;

main()
{

    system("cls");

    temptopHeader();
    maze();


    bool runningame = true;
    int x = 12;
    int y = 12;
    printsquare(x,y);
    while(runningame)
    {
        if(GetAsyncKeyState(VK_LEFT))
        {  
            char nextLocation = Getch(x-1,y);
            if (nextLocation == ' ')
            {
                erase(x,y);
                x=x-1;
                printsquare(x,y);
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {   char ch = 219;
            char nextLocation = Getch(x+1,y);
            if (nextLocation == ' ' || nextLocation == ch)
            {
                erase(x,y);
                x=x+1;
                printsquare(x,y);
            }
        }
        if(GetAsyncKeyState(VK_UP))
        {
            char nextLocation = Getch(x,y-1);
            if (nextLocation == ' ')
            {
                erase(x,y);
                y=y-1;
                printsquare(x,y);
            }
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = Getch(x,y+1);
            if (nextLocation == ' ')
            {
                erase(x,y);
                y=y+1;
                printsquare(x,y);
            }
        }
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            runningame = false;
        }
        Sleep(200);
    }



}



void topHeader()
{
    cout << "\t\t\t" << "   $$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "\t\t\t" << "   &&&&               &&&&" << endl;
    cout << "\t\t\t" << "   &&&&    TETRIS     &&&&" << endl;
    cout << "\t\t\t" << "   &&&&               &&&&" << endl;
    cout << "\t\t\t" << "   $$$$$$$$$$$$$$$$$$$$$$$" << endl;
}


char Getch(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy = {0,0};
  SMALL_RECT rect = {x,y,x,y};
  COORD coordBufSize;
  coordBufSize.X=1;
  coordBufSize.Y=1;  
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize,xy, &rect) ? ci.Char.AsciiChar : ' ';
}


void gotoxy(int x , int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void maze()
{
cout << "   ############################################################################## "<< endl; 
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ||                                                                          || "<< endl;
cout << "   ############################################################################## "<< endl;
}


void printsquare(int x, int y)
{
    gotoxy(x,y);
    char ch = 219;
    char sh1[3] = {ch,ch,ch};
    for(int i = 0;i < 3;i++)
    {
        cout << sh1[i];

    }

}

void printrectangle(int x, int y)
{
    gotoxy(x,y);
    char ch = 219;
    char sh1[5] = {ch,ch,ch,ch,ch};
    for(int i = 0;i < 5;i++)
    {
        cout << sh1[i];

    }

}


void erase(int x, int y)
{
  gotoxy(x,y);
  // char er[3] = {' ',' ', ' '};
  for(int i = 0;i < 5;i++)
  {
    // cout << er[i];
    cout << ' ';

  }
}

void temptopHeader()
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  int k = 9;
  SetConsoleTextAttribute(hConsole, k);
  cout << "\t\t"<< " $$$$$$$$\\         $$\\               $$\\ " << endl;           
  cout << "\t\t"<< " \\__$$  __|        $$ |              \\__|   " << endl;       
  cout << "\t\t"<< "    $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$\\  $$$$$$$\\" << endl;
  cout << "\t\t"<< "    $$ |$$  __$$\\_ $$  _|  $$  __$$\\ $$ |$$  _____|" << endl;
  cout << "\t\t"<< "    $$ |$$$$$$$$ | $$ |    $$ |  \\__|$$ |\\$$$$$$\\  " << endl;
  cout << "\t\t"<< "    $$ |$$   ____| $$ |$$\\ $$ |      $$ | \\____$$\\ " << endl;
  cout << "\t\t"<< "    $$ |\\$$$$$$$\\  \\$$$$  |$$ |      $$ |$$$$$$$  |" << endl;
  cout << "\t\t"<< "    \\__| \\_______|  \\____/ \\__|      \\__|\\_______/  " << endl;
}


                                                  