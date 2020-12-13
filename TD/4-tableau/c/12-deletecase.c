#include<stdio.h>
void main(){
int t[100];
int i,n,di,v,tmp;

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

//delete element at a position
do {
    printf("quelle element vous voulez supprimer:");
    scanf("%d", &di);
}while((di<1)||(di>n));

printf("element[%d]:%d vas etre supprimer\n",di,t[di]);

n=n-1;
for (i = di; i <= n; i++){
    t[i]=t[i+1];
        }

//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");
}
