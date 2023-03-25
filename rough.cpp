#include <iostream>
#include <windows.h>
using namespace std;

void square();
void clrname();
void temptopHeader();

main()
{
  system("cls");

  temptopHeader();
}


void square()
{
    char ch = 219;
    char sh1[3] = {ch,ch,ch};
    for(int i = 0;i < 3;i++)
    {
        cout << sh1[i];

    }

}

void clrname()
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  int k = 8;
  SetConsoleTextAttribute(hConsole, k);
  cout << " Try to give your Best!" << endl;
  cout << "My name is noman.";
}

void temptopHeader()
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  int k = 9;
  SetConsoleTextAttribute(hConsole, k);
  cout << "\t\t"<< " $$$$$$$$\\         $$\\               $$\\ " << endl;           
  cout << "\t\t"<< " \\__$$  __|        $$ |              \\__|   " << endl;       
  cout << "\t\t"<< "    $$ | $$$$$$\\ $$$$$$\\    $$$$$$\\  $$\\  $$$$$$$\\" << endl;
  cout << "\t\t"<< "    $$ |$$  __$$\\ _$$  _|  $$  __$$\\ $$ |$$  _____|" << endl;
  cout << "\t\t"<< "    $$ |$$$$$$$$ | $$ |    $$ |  \\__|$$ |\\$$$$$$\\  " << endl;
  cout << "\t\t"<< "    $$ |$$   ____| $$ |$$\\ $$ |      $$ | \\____$$\\ " << endl;
  cout << "\t\t"<< "    $$ |\\$$$$$$$\\  \\$$$$  |$$ |      $$ |$$$$$$$  |" << endl;
  cout << "\t\t"<< "    \\__| \\_______|  \\____/ \\__|      \\__|\\_______/  " << endl;
}