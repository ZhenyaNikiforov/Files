/* Задача 2.
Читаем массив из файла */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int sizeArray = 0;
  ifstream fileIntegers("in.txt");
  fileIntegers >> sizeArray;

  int *integers = new int[sizeArray];

  for (int i = 0; i < sizeArray; i++)
  {
    fileIntegers >> integers[i];
  }

  for (int i = sizeArray - 1; i > -1; i--)
  {
    cout << integers[i] << " ";
  }

  delete[] integers;
  fileIntegers.close();
  return 0;
}