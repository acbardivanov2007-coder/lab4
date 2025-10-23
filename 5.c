
#include <stdio.h>
int main()
{
  int mon=0;
  int z=0;
  int day;
  printf("введите количество дней для сложения:\n");
  scanf("%d", &day);
  while (mon++<day)
    z=mon+z;
    printf("%d\n", z);
  return 0;
}
