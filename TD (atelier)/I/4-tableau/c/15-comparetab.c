#include<stdio.h>
void main(){
int t[100],a[100];
int i,nt,na,v;

//size array input
  do {
    printf("taille 1er tableau:");
    scanf("%d", & nt);
  } while (!(nt >= 1));

// array input
for (i = 1; i <=nt; i++) {
    printf("element[%d]:", i);
    scanf("%d", & t[i]);
}

//size array input
  do {
    printf("taille 2eme tableau :");
    scanf("%d", & na);
  } while (!(na >= 1));

// array input
for (i = 1; i <=na; i++) {
    printf("element[%d]:", i);
    scanf("%d", & a[i]);
}

  if (na != nt) {
    printf("les deux tableaux sont de tailles differentes\n");
  } else {
    i= 1;
    while (i <= nt) {
      if (t[i] == a[i]) {
        i++;
        v=1;
      } else {
        printf("les deux tableaux ont des elements different\n");
        break;
      }
    }
    if (v==1) {
      printf("les deux tableaux sont identiques\n");
    }
  }
}