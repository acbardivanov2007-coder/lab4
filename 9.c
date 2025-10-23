#include <stdio.h>
void temper (double f);
int main()
{
  double far;
  printf("введите температуру в фаренгейтах:\n");
  while (scanf("%lf", &far) == 1)
  {
    temper(far);
    printf("введите другое згначение для перевода или любую букву-символ для выхода:\n");
  }
  return 0;
  }
  void temper (double far)
  {
  const double a = 5.0; // фаренгейты в цельсии
  const double b = 9.0; // фаренгейты в цельсии
  const double c = 32.0; // фаренгейты в цельсии
  const double d = 273.16; // цельсии в кельвины
  double cel = a / b * (far - c);
  double kel = cel + d;
  printf("%.2f фаренгейт это %.2f цельсий или %.2f кельвин\n",far, cel, kel);
}
