#include <stdio.h>
int main()
{
  int n=0;
  int z=0;
  int x;
  printf("введите число для сложения квадратов\n");
  scanf("%d", &x);
  while (n++<x)
         z=(n*n+z);
         printf("%d\n", z);
  return 0;
}
