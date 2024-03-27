#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  int alturas;
  float media, maioraltura = 0, menoraltura = 230, mais2m = 0, i = 0;

  srand(time(NULL));

  cout << endl
       << "Gerador de Alturas!!!" << endl;

  for (i = 0; i < 1000; i++)
  {
    alturas = rand() % (230 + 1 - 150) + 150;
    if (alturas >= 200)
    {
      mais2m++;
      if (alturas / 100.0 > maioraltura)
      {
        maioraltura = alturas;
      }
    }
    else if (alturas / 100.0 < menoraltura)
    {
      menoraltura = alturas;
    }
    media += alturas;
  }

  media /= 1000;
  mais2m = (mais2m / 1000) * 100;

  cout << endl
       << "A maior altura gerada foi: " << maioraltura / 100.0 << endl;
  cout << endl
       << "A menor altura gerada foi: " << menoraltura / 100.0 << endl;
  cout << endl
       << "A média entre as alturas geradas foi: " << media << endl;
  cout << endl
       << "A porcentagem de pessoas maiores de 2m é: %" << mais2m << endl;

  return 0;
}