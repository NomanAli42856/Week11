#include<iostream>
#include<windows.h>
using namespace std;

void topHeader();
void temptopHeader();
void maze();
void gotoxy(int , int);
char Getch(short int x,short int y);
void erase(int x, int y);
void printsh1(int x, int y);
void printsh2(int x, int y);
void printsquare(int x, int y);
void printsh4(int x, int y);
void printrectangle(int x, int y);
void scoreprint();
int score = 0;

main()
{

    system("cls");

    temptopHeader();
    maze();

    gotoxy(85,26);
    cout << "Score :   0";
    bool runningame = true;
    int x=40;
    int y=9;
    int sh = 0;
    printsh1(x,y);
    while(runningame)
    {   char ch = 219;
        sh = sh % 5;
        x = 40;
        y = 9;
        if(sh == 0)
            printsh1(x,y);
        else if(sh == 1)
            printsh2(x,y);
        else if(sh == 2)
            printsquare(x,y);
        else if(sh == 3)
            printsh4(x,y);
        else if(sh == 4)
            printrectangle(x,y);
        while(true)
        {
            if(GetAsyncKeyState(VK_LEFT))
            {  
                char nextLocation = Getch(x-1,y);
                if (nextLocation == ' ')
                {
                    erase(x,y);
                    x=x-1;
                    if(sh == 0)
                        printsh1(x,y);
                    else if(sh == 1)
                        printsh2(x,y);
                    else if(sh == 2)
                        printsquare(x,y);
                    else if(sh == 3)
                        printsh4(x,y);
                    else if(sh == 4)
                        printrectangle(x,y);
                }
            }
            if(GetAsyncKeyState(VK_RIGHT))
            {   
                char nextLocation = Getch(x+1,y);
                if (nextLocation == ' ' || nextLocation == ch)
                {
                    erase(x,y);
                    x=x+1;
                    if(sh == 0)
                        printsh1(x,y);
                    else if(sh == 1)
                        printsh2(x,y);
                    else if(sh == 2)
                        printsquare(x,y);
                    else if(sh == 3)
                        printsh4(x,y);
                    else if(sh == 4)
                        printrectangle(x,y);
                }
            }
            if(GetAsyncKeyState(VK_UP))
            {
                char nextLocation = Getch(x,y-1);
                if (nextLocation == ' ')
                {
                    erase(x,y);
                    y=y-1;
                    if(sh == 0)
                        printsh1(x,y);
                    else if(sh == 1)
                        printsh2(x,y);
                    else if(sh == 2)
                        printsquare(x,y);
                    else if(sh == 3)
                        printsh4(x,y);
                    else if(sh == 4)
                        printrectangle(x,y);
                }
            }
                char nextLocation = Getch(x,y+1);
                if (nextLocation == ' ')
                {
                    erase(x,y);
                    y=y+1;
                    if(sh == 0)
                        printsh1(x,y);
                    else if(sh == 1)
                        printsh2(x,y);
                    else if(sh == 2)
                        printsquare(x,y);
                    else if(sh == 3)
                        printsh4(x,y);
                    else if(sh == 4)
                        printrectangle(x,y);
                }
                scoreprint();
                char upLocation = Getch(x,y-1);
                if (upLocation == '#')
                {
                    runningame = false;
                    break;
                }
                if (nextLocation == '#'|| nextLocation == ch)
                {
                    sh++;
                    break;
                }

            if(GetAsyncKeyState(VK_ESCAPE))
            {
                runningame = false;
            }
            Sleep(100);
        }
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

void printsh1(int x, int y)
{
    gotoxy(x,y);
    char ch = 219;
    cout << ch;

}

void printsh2(int x, int y)
{
    gotoxy(x,y);
    char ch = 219;
    cout << ch << ch;

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

void printsh4(int x, int y)
{
    gotoxy(x,y);
    char ch = 219;
    cout << ch << ch << ch << ch;

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
  for(int i = 0;i < 7;i++)
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


void scoreprint()
{
    char ch = 219;
    char currentLocation;
    int check = 0;
    for( int y = 9; y <= 26 ; y++) // ( int y = 9; y <= 26 ; y++)
    {
        for( int x = 5; x <= 78;x++)
        {
            currentLocation = Getch(x,y);
            if(currentLocation == ch)
            {
                check++;
            }
        }
        if(check == 30) // real is 73
        {
            score = score + 10;
            gotoxy(95,26);
            cout << score;
        }
    }
}