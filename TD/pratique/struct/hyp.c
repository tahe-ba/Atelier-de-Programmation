#include <stdio.h>
#include <math.h>

  typedef struct {
        float abs;
        float ord;
    }point;

void main (){
float d;
point p1,p2;
printf("point 1:\nsaisir l'abscisse du point 1:");
scanf("%f",&p1.abs);
printf("saisir l'ordonné du point 1:");
scanf("%f",&p1.ord);
printf("\n");

printf("point 2:\nsaisir l'abscisse du point 2:");
scanf("%f",&p2.abs);
printf("saisir l'ordonné du point 2:");
scanf("%f",&p2.ord);
printf("\n");

d=sqrt(pow((p2.abs-p1.abs),2)+pow((p2.ord-p1.ord),2));
printf ("%.2f\n",d);
}