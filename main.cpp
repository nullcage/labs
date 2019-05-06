#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Complex.h"

using namespace std;

int main() {
  system("cls");

  Complex x, y, z;
  char operation;
  bool correct = false;
  Complex p[256];
	int n = 0;
  Complex maxModule;
  maxModule.re = 0, maxModule.im = 0;

  cout << "Введите реальную и мнимую часть первого комплексного числа..." << endl;
  cin >> x.re >> x.im;
  cout << "Введите реальную и мнимую часть первого комплексного числа..." << endl;
  cin >> y.re >> y.im;

  do
  {
    cout << "Введите знак операции..." << endl;
    cin >> operation;
    switch (operation)
	  {
	  case '+':
		  z = addiction(x, y);
      correct = true;
		  break;
	  case '-':
		  z = subtraction(x, y);
      correct = true;
		  break;
	  case '*':
		  z = multiplication(x, y);
      correct = true;
		  break;
	  case '/':
		  z = division(x, y);
      correct = true;
		  break;
    default:
      cout << "Введен неверный знак операции!" << endl;
	  }
  } while (!correct);
  cout << "Результат: " << z.re << "+(" << z.im << ")i\n";

	ifstream file;
	file.open("Complex.txt", ios::in);
	if (file)
	{
		while (!file.eof())
		{
			file >> p[n].re;
			file >> p[n].im;
			n++;
		}
	}
	file.close();

  for (int i = 0; i < n; i++)
  {
    if (module(p[i]) >= module(maxModule))
    {
      maxModule.re = p[i].re;
      maxModule.im = p[i].im;
    }
  }

  cout << "Комплексное число из файла с максимальным модулем:" << endl;
  cout << maxModule.re << "+(" << maxModule.im << ")i" << endl;
  cout << "Модуль равен: " << module(maxModule);

  return 0;
}