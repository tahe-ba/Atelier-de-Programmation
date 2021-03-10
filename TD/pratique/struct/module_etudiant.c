#include<stdio.h>
#define N 3

typedef struct {
    char nom[N];
    char prenom[N];
    float MG;
}etudiant;

void remplir(etudiant* t) {
    int i = 0;
    printf ("saisie des informations etudiant:\n");
    for (i=0;i<N;i++){
        printf("etudiant n°%d:\n",i+1);
        printf("\tsaisir le nom: ");
        scanf("%s",t[i].nom);
        printf("\tsaisir le prenom: ");
        scanf("%s",t[i].prenom);
            do {
                printf("\tsaisir la moyenne: ");
                scanf("%f",&(t[i].MG));
            } while (!((t[i].MG >=0)&&(t[i].MG <= 20))) ;
    }
}

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
int max;
    remplir(&liste);
    max=findmax(liste,N);
    printf("l'etudiant ayant la plus forte moyenne est %s %s d'une moyenne generale %.2f\n",liste[max].nom,liste[max].prenom,liste[max].MG);
}