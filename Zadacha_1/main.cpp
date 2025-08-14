/* Zadacha 1. */

#include <iostream>
#include <fstream>
#include "paths.cpp"
#include "hard.cpp"
using namespace std;

int main()
{
  string vegetable = "";
  ifstream vegetables(pathToVegetables);

  if (!vegetables.is_open())
  {
    cout << fail << "\n";
    return 0;
  }

  while (!vegetables.eof())
  {
    vegetables >> vegetable;
    cout << vegetable << "\n";
  }

  return 0;
}