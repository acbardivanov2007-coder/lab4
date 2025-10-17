#include <stdio.h>
#define day_week 7
int main()
{
  int day;
  int week;
  int day_left;
  printf("введите количество дней:\n");
  scanf("%d", &day);
  while (day > 0)
        {
        week = day / day_week;
        day_left = day % day_week;
        printf("%d дней это: %d недель %d дней\n", day, week, day_left);
        printf("введите другое значение или 0 для выхода:\n");
        scanf("%d", &day);
        };
  return 0;
}
