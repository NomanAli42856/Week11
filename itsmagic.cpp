#include <iostream>
#include <windows.h>
using namespace std;

void generateCharacters();
void generateColors();

main()
{
  system("cls");
  generateCharacters();
  generateColors();
}

void generateCharacters()
{
  char character;
  for (int x = 0; x < 500; x++)
  {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 7;
    SetConsoleTextAttribute(hConsole, k);
    // pick the characters combinations to make your players and enemies
    character = x;
    cout << x << "\t" << character << endl;
  }
}

void generateColors()
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
  for (int k = 1; k < 255; k++)
  {
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);
    cout << k << " Try to give your Best!" << endl;
  }
}