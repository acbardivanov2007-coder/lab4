#include <stdio.h>
int main()
{
  int mon=0;
  int z=0;
  int x;
  printf("введите количество дней для сложения денег в квадрате:\n");
  scanf("%d", &x);
  while (mon++<x)
         z=(mon*mon+z);
         printf("вот ваша сумма %d\n", z);
  return 0;
}
