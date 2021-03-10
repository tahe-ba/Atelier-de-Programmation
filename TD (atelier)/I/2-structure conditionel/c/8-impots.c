//???
#include<stdio.h>
void main() {
  float rimp, rpart;
  int nbpart;
  double impart, impot;
  printf("saisir le revenu imposables:");
  scanf("%f", & rimp);
  printf("saisir le nombre departs fiscales:"),
    scanf("%d", & nbpart);
  rpart = (rimp / nbpart);
  if (rpart < 50) {
    impart = 0.0;
  } else {
    if (rpart < 100) {
      impart = 0 + (rpart- 50)* 0.1;
    } else {
      if (rpart < 200) {
        impart = 0 + 50* 0.1 + (rpart- 100)* 0.25;
      } else {
        impart = 0 + 50* 0.1 + 100* 0.25 + (rpart- 200)* 0.5;
      }
    }
  }
  impot = impart* nbpart;
  printf("le montant de l’impot est: %.3f \n", impot);
}