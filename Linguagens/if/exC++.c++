#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Digite um numero: ";
  cin >> num;
  if (num < 0)
  {
    cout << "O numero " << num << "e negativo";
  }
  else (num > 0)
  { cout << "O numero "<< num << "e positivo"; }
}