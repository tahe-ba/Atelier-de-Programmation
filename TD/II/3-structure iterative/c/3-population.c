#include<stdio.h>

void main() {
  double p;
  int annee, i;
  p = 9380404;
  //au debut 1999
  p = p + p * (0.2007 + 0.0506- 0.0073) * 0.5;
  do {
  printf("entrer l annee:");
  scanf("%d", & annee);
  }while (annee<1999)  ;
  for (i = 2000; i <= annee; i++) {
    p = p + p *(0.2007 + 0.0506- 0.0073);
  }
  printf("La population debut %d est %.0f\n", annee, p);
}