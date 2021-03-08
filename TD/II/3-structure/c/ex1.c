#include <stdio.h>
#define N 2
typedef struct{
    float moy;
    float coef;
}matiere;

typedef struct{
    char nom [20];
    char prenom [20];
    matiere M[4];
    float mg;
}etudiant;

float calcul_mg (matiere M[]){
    float mg=0 , m=0 , sc=0;
    int i;
    for (i=0;i<4;i++){
        m += (M[i].moy * M[i].coef );
        sc+=M[i].coef ;
    }
    mg= m/sc ;
return mg;
}

matiere remplir_matiere(){
    matiere m;
    printf("\tmoyenne: ");
    scanf("%f", & m.moy);
    printf("\tcoefficient : ");
    scanf("%f", & m.coef);
    return m;
}

/*
void remplir_etudiant(etudiant * e){
    int i;
    printf("information de l'etudiant:\n");
    printf("\tnom: ");
    scanf("%s", e -> nom);
    printf("\tprenom: ");
    scanf("%s", e -> prenom);
    for ( i = 0; i <4 ; i++){
        printf("  matiere %d\n",i+1);
        e->M[i]=remplir_matiere();
    }
    e->mg = calcul_mg(e->M);
}
*/

etudiant remplir_etudiant(){
    etudiant e;
    int i;
    printf("information de l'etudiant:\n");
    printf("\tnom: ");
    scanf("%s", e.nom);
    printf("\tprenom: ");
    scanf("%s", e.prenom);
    for ( i = 0; i <4 ; i++){
        printf("  matiere %d\n",i+1);
        e.M[i]=remplir_matiere();
    }
    e.mg = calcul_mg(e.M);
    return e;
}

void afficher_matiere(matiere m){
    printf("\tmoyenne: %f\n",m.moy);
    printf("\tcoefficient : %f\n",m.coef);
}

void afficher_etudiant (etudiant e){
    int i;
    printf("\ninformation de l'etudiant:\n");
    printf("\tnom: %s\n", e.nom);
    printf("\tprenom: %s\n", e.prenom);
    for ( i = 0; i <4 ; i++){
        printf("    matiere %d\n",i+1);
        afficher_matiere(e.M[i]);
    }
    printf("\n\tmoyenne generale: %.2f\n", e.mg);
}

void main (){
    etudiant e1;
    etudiant liste[N];
    remplir_etudiant(&e1);
    afficher_etudiant(e1);
}

