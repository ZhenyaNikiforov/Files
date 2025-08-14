/* Задача 1.
Читаем надписи из файла. */

#include <iostream>
#include <fstream>
#include <windows.h>
#include "paths.cpp"
#include "hard.cpp"
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  string vegetable = "";
  ifstream vegetables(pathToVegetables);

  if (!vegetables.is_open())
  {
    cout << fail << "\n";
    vegetables.close();
    return 0;
  }

  while (!vegetables.eof())
  {
    vegetables >> vegetable;
    cout << vegetable << "\n";
  }

  vegetables.close();
  return 0;
}