#include <stdio.h>
void small()
{
          int a[10], i, small;
          printf(" Enter elements of an array: ");

          for (i=0; i<=9; i++)
          scanf("%d", &a[i]);
          small = a[0];

          for (i=0; i<=9; i++)

          if (a[i] < small)
          small = a[i];

          printf(" Smallest number is %d", small);
          getch();
}
