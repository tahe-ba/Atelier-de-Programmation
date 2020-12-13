#include<stdio.h>
void main(){
int t[100];
int i,n,ii,v,tmp;

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

//isert element at a position
do {
    printf("ou inserer la valeur:");
    scanf("%d", &ii);
}while((ii<1)||(ii>n));

printf("element[%d]:", ii);
scanf("%d",&v);

n=n+1;
for (i = n; i >= ii; i--){
    t[i+1]=t[i];
        }
t[ii] = v;

//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");
}
