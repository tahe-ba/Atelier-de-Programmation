#include<stdio.h>
void main(){
int t[100];
int i,n,f=0,r;

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
 
    printf("valeur a rechercher : ");
    scanf("%d",&r);

i=1;
do{
    if (r==(t[i])) {
        f=i;
        printf("l'entier %d se trouve dans t[%d]\n",r,f);
    }else {
    i++;
    }
}while((f!=i)&&(i<=n)) ;
if (f!=i){
    printf("l'entier %d n'est pas present dans le tableau\n",r);
}
}