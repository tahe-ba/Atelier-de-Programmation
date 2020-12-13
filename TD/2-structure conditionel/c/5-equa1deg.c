#include <stdio.h>
void main(){
  int a, b;
  float x;
  printf("Entrer a :");
  scanf("%d", &a);
  printf("Entrer b :");
  scanf("%d", &b);
printf("==> %dx + %d=0 <==\n",a,b);
  if (a == 0) {
    if (b == 0) {
      printf("La solution de l'equation est l'ensemble IR\n");
    } else {
      printf("Aucun solution (Ensembre vide dans IR)\n");
    }
  } else {
    x = (float)-b / a;
    printf("La solution de l'equation est\nx = %.2f\n", x);
  }
}