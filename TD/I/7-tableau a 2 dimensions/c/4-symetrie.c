#include <stdio.h>

void input(int* n) {
  do {
    printf(">>");
    scanf("%d", n);
  } while (*n <= 0);
}
//t+i = &t[i]

void remplir(int (*t)[50], int n) {
    int i,j;
    printf("Remplissage du tableau de taille [%d][%d]\n",n,n);
   for (i=0; i<n; i++)
    for (j=0; j<n; j++)
        {
         printf("Elément[%d][%d] : ",i,j);
         scanf("%d", &t[i][j]);
        }
}

void afficher(int (*t)[50], int n) {
    int i,j;
    for (i=0;i<n;i++){
    printf(">>>>>>>>");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<n;i++){
    printf(">>>>>>>>");
    }
    printf("\n");
} 

int isSYM(int (*t)[50], int n){
    int a=1,i,j;
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if ( t[i][j] != t [j][i])
               return 0;
       }
    }
    return 1;
}

void main (){
    int n,i=0,j,a;
    int t[50][50];
    printf("ordre de matrice :");
    input(&n);
    remplir(t,n);
    afficher(t,n);
if (isSYM(t,n)==1) {
    printf("la matrice est symetrique\n");
}else if (isSYM(t,n)==0){
    printf("la matrice n'est pas symetrique\n");
}
}