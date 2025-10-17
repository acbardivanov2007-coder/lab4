#include <stdio.h>
#define hour_min 60
int main ()
{
  int min;
  int hour;
  int min_left;
  printf("введите время в минутах:\n");
  scanf("%d", &min);
  while (min > 0)
        {
        hour = min / hour_min;
        min_left = min % hour_min;
        printf("%d минут это: %d часов, %d минут\n\n", min, hour, min_left);
        printf("Введите больше минут для перевода или 0 для выхода:\n");
        scanf("%d", &min);
        }
  return 0;
}
