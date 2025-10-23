#include <stdio.h>
int main()
{
  int mon=0;
  int z=0;
  int day;
  printf("введите количество дней для сложения денег в квадрате:\n");
  scanf("%d", &day);
  while (mon++<day)
         z=(mon*mon+z);
         printf("вот ваша сумма %d\n", z);
  return 0;
}
