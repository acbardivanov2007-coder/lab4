#include <stdio.h>
#define cm_inch 2.54
#define inch_feet 12.0
int main()
{
  float cm;
  int feet;
  float inch;
  float inch_left;
  printf("введите высоту в сантиметрах:\n");
  scanf("%f",&cm);
  while (cm > 0)
    {
      inch = cm / cm_inch;
      feet = inch / inch_feet; 
      inch_left = inch - (feet * inch_feet); 
      printf("%.1f см = %.0f футов %.1f дюймов\n",cm,feet,inch_left);
      printf("Введите высоту в сантиметрах (<=0 для выхода из программы):\n");
      scanf("%f",&cm);
    }
  return 0;
}
