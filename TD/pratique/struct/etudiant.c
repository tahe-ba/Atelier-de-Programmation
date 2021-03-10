#include <stdio.h>
#define N 3

typedef struct {
    char nom[N];
    char prenom[N];
    float MG;
}etudiant;

int findmax (etudiant t[], int n){
    int imax=0,i;
	for (i=0; i<n; i++){
        if (t[i].MG > t[imax].MG){
                imax =i;
        }
    }
return imax;
}

void main() {
    etudiant liste [N];
    int i,imax;
    printf ("saisie des informations etudiant:\n");

    for (i=0;i<N;i++){
        printf("etudiant n°%d:\n",i+1);
        printf("\tsaisir le nom: ");
        scanf("%s",liste[i].nom);
        printf("\tsaisir le prenom: ");
        scanf("%s",liste[i].prenom);
            do {
                printf("\tsaisir la moyenne: ");
                scanf("%f",&liste[i].MG);
            } while (!((liste[i].MG >=0)&&(liste[i].MG <= 20))) ;
    }

    imax=findmax(liste,N);
    printf("l'etudiant ayant la plus forte moyenne est %s %s d'une moyenne generale %.2f\n",liste[imax].nom,liste[imax].prenom,liste[imax].MG);
}