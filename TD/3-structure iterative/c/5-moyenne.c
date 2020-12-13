#include <stdio.h>
//#define ncase 100

void main() {
  //var
  int n, i, s = 0, max, min, npos = 0;
  int table[100];
  float moy;

  //size array input
  do {
    printf("taille :");
    scanf("%d", & n);
  } while (!(n >= 1));

  // array input
  for (i = 0; i < n; i++) {
    printf("element[%d]:", i);
    scanf("%d", & table[i]);
  }

  //init min max
  max = table[0];
  min = table[0];

  //search min max npos
  for (i = 0; i < n; i++) {
    s += table[i];
    if (table[i] >= 0)
      npos++;
    if (table[i] > max)
      max = table[i];
    if (table[i] < min)
      min = table[i];
  }

  //moy
  moy = (float) s / n;

  //write results
  printf("%d est la somme des elements\n", s);
  printf("%d est le nombre des elements positifs\n", npos);
  printf("%d est le maximum\n", max);
  printf("%d est le minimum\n", min);
  printf("%.1f est la moyenne des elements\n", moy);

  //write table elements
  /*
  for (i = 0; i < n; i++) {
      printf("table[%d]=%d\n",i,table[i]);
  }
  */
}