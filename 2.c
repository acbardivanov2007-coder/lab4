#include <stdio.h>
int main ()
{
  int num=0;
  int z=0;
  printf("выберите число:\n");
  scanf("%d", &num);
  z = num;
  while (num <= z+10)
        {
        printf("%d\n", num++);
        }
  return 0;
}
