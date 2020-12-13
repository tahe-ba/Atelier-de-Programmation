#include<stdio.h>

void main() {
  int n,h,r,m,s;
  printf("veillez saisir l'entier:");
  scanf("%d", & n);
  h = n / 3600;
  r = n % 3600;
  m = r / 60;
  s = r % 60;
  printf("%dsecondes= %dheures %dminutes et %dsecondes\n", n, h, m, s);
}