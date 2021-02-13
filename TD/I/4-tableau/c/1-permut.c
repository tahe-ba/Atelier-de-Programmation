#include <stdio.h>
void main(){
int t[100];
int n,i,e1,e2,provi=0;
//size array input
  do {
    printf("taille :");
    scanf("%d", & n);
  } while (!(n >= 1));

// array input
for (i = 1; i <=n; i++) {
    printf("element[%d]:", i);
    scanf("%d", & t[i]);
}
//print array
printf("=> TABLEAU <=\n");

for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");

//imput element a permuter
printf("=> PERMUTATION <=\n");

do {
    printf("1-element[??]:");
    scanf("%d", &e1);
}while((e1<1)||(e1>n));

do {
    printf("2-element[??]:");
    scanf("%d", &e2);
}while((e2<1)||(e2>n)||(e1==e2));

//swap
provi=t[e1];
t[e1]=t[e2];
t[e2]=provi;

//print new array
printf("=> nouveau tableau <=\n");

for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");
}