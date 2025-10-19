#include <stdio.h>
void cube(double n);
int main()
{
  double n;
  printf("введите число для возведения в куб\n");
  scanf("%lf", &n);
  cube(n);
  return 0;
}
void cube(double n)
{
  double x3 = n*n*n;
  printf("куб числа %f это %f", n, x3);
}
