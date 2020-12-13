#include <stdio.h>
void main()
{
  int h;
  double sal;
  printf("heures travaillé: ");
  scanf("%d", &h);

  if (h <= 39) {
    sal = h*1.0;
  } else {
    if (h < 44) {
      sal = 39*1.0 + (h-39)*1.5;
    } else {
      sal = 39*1.0 + 5*1.5 + (h-44)*2.0;
    }
  }
  printf("Le salaires est:%.3f\n", sal);
}