#include<stdio.h>
void main(){
float t[100];
int i,n;
float prod=1,s,moy;

//size array input
  do {
    printf("taille tableau :");
    scanf("%d", & n);
  } while (!(n >= 1));

// array input
for (i = 1; i <=n; i++) {
    printf("element[%d]:", i);
    scanf("%f", & t[i]);
}

for (i = 1; i <=n; i++) {
    if (t[i]!=0){
        prod *= t[i];
        s += t[i];
    }
}

//print array
printf("le produit des elements non nul est %.2f \n",prod);
moy=s/n;
printf("le moyenne des elements non nul est %.2f \n",moy);
}