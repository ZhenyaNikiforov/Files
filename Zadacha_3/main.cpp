#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  int sizeArray = 0;
  cout << "Введите размер массива: ";
  cin >> sizeArray;

  int *integers = new int[sizeArray];

  for (int i = 0; i < sizeArray; i++)
  {
    cout << "arr[" << i << "] = ";
    cin >> integers[i];
  }

  ofstream reintegers("out.txt");
  reintegers << sizeArray << "\n";

  for (int i = sizeArray - 1; i > -1; i--)
  {
    reintegers << integers[i] << " ";
  }

  reintegers.close();
  delete[] integers;
  return 0;
}