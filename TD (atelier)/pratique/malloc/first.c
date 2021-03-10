#include <stdio.h>
#include <stdlib.h>

int main()
{
int *T;
int n,i,nb;
n=10;
printf("saisir le nbre de case du tableau :");
scanf("%d",&nb);
T=(int *)malloc(nb*sizeof(int));
for(i=0;i<=nb-1;i++){
    *(T+i)=n;
    n++;
}
printf("le contenu du tableau est : \n");
  for(i=0;i<nb;i++){
    printf("%d\t",*(T+i));
  }
printf("\n");
free(T);
}