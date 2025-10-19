#include <stdio.h>
int main()
{
  int op1;
  int op2;
  printf("введите второй операнд:\n");
  scanf("%d",&op2);
  printf("введите первый операнд:\n");
  scanf("%d",&op1);
  while(op1 > 0)
  {
    printf("%d %% %d = %d\n", op1, op2, op1%op2);
    printf("Введите следующее число для первого операнда (<= 0 для выхода из программы):\n");
    scanf("%d",&op1);
  }
  return 0;
}
