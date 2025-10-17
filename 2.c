#include <stdio.h>
int main ()
{
  int n=0;
  int z=0;
  printf("выберите число:\n");
  scanf("%d", &n);
  z = n;
  while (n <= z+10)
        {
        printf("%d\n", n++);
        }
  return 0;
}
