#include<stdio.h>

void main() {
  int x,y,max;
  printf("1er entier: ");
  scanf("%d", & x);
  printf("2eme entier: ");
  scanf("%d", & y);

  if (x > y) {
    max = x;
  } else {
    max = y;
  }
  printf("Le maximum est: %d\n", max);
}

/*
#include<stdio.h>

void main() {
  int x,y,z,max;
  printf("1er entier: ");
  scanf("%d", & x);
  printf("2eme entier: ");
  scanf("%d", & y);
  printf("3eme entier: ");
  scanf("%d", & z);

  if (x > y) {
    max = x;
  } else {
    max = y;
  }
  if (z > max) {
    max = z;
  }
  printf("le maximum est %d\n", max);
}
*/