#include <iostream>
using namespace std;

int main()
{
  float base,altura,area;

  do {
    cout << "Digite a base do retangulo: ";
    cin >> base;
    if (base > 0)
    {
      cout << "digite a altura do retangulo: ";
      cin >> altura;
      area = base * altura;
      cout << "A area do retangulo = " << area << endl;
    }
  } while (base > 0);
  return 0;
}