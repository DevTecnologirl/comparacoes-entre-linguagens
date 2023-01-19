#include <iostream>
using namespace std;

int main()
{
  char nome[20];
  int idade;
  float altura;

  cout << "Digite seu nome:";
  cin >> nome;
  cout << "Digite sua idade";
  cin >> idade;
  cout << "Digite sua altura:";
  cin >> altura;

  cout << nome << " tem " << idade << " anos de idade e mede " << altura << " metros ";
  return 0;
}