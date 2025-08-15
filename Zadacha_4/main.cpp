/* Задание 4.
Выведение двумерного массива */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int rows = 0;
  int columns = 0;

  ifstream fileDualIntegers("in.txt");
  fileDualIntegers >> rows;
  fileDualIntegers >> columns;

  int **dualIntegers = new int *[rows];
  for (int i = 0; i < rows; i++)
  {
    dualIntegers[i] = new int[columns];
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      fileDualIntegers >> dualIntegers[i][j];
    }
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = columns - 1; j > -1; j--)
    {
      cout << dualIntegers[i][j] << " ";
    }
    cout << "\n";
  }

  for (int i = 0; i < rows; i++)
  {
    delete[] dualIntegers[i];
  }
  delete[] dualIntegers;

  fileDualIntegers.close();

  return 0;
}
