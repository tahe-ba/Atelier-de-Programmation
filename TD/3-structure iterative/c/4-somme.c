#include <stdio.h>

void main() {
  int n,i;
  float s,o=1;
  do {
    printf("saisir un etier superieur a un : ");
    scanf("%d", & n);
  } while (!(n >= 1));

for (i = 1; i <= n; i++)
    s += (o/i);
   //printf("La somme est %.1f \n",s);}
  printf("La somme est %.1f \n",s);
}