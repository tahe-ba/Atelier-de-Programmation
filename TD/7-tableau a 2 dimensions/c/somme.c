#include<stdio.h>
void input(int* n) {
  do {
    printf(">>");
    scanf("%d", n);
  } while (*n <= 0);
}
//t+i = &t[i]

void remplir(int (*t)[50], int n,int m) {
    int i,j;
    printf("Remplissage du tableau de taille [%d][%d]\n",n,m);
   for (i=0; i<n; i++)
    for (j=0; j<m; j++)
        {
         printf("Elément[%d][%d] : ",i,j);
         scanf("%d", &t[i][j]);
        }
}

void afficher(int (*t)[50], int n,int m) {
    int i,j;
    for (i=0;i<m;i++){
    printf(">>>>>>>>");
    }
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<m;i++){
    printf(">>>>>>>>");
    }
    printf("\n");
} 

int somme(int (*t)[50], int n,int m){
    int som ,i , j;
    for (som=0, i=0; i<n; i++)
     for (j=0; j<m; j++)
         som += t[i][j];
return som;         
}

void main(){
    int t[50][50];
    int i,j,l,c,som;
    printf("nombres de lignes:\n");
    input(&l);
    printf("nombres de colonnes:\n");
    input(&c);
    remplir(t,l,c);
    afficher(t,l,c);
    printf("somme des éléments : %d\n", somme(t,l,c));
}