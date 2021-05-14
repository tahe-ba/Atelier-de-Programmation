#include <stdio.h>
#include <stdlib.h>

typedef struct elementfile
{
    int valeur;
    elementpile *suivant;
}elementpile;

typedef struct elementpile * pile;

pile creation(){
    return NULL;
}

int est_vide (pile pi) {
    if (pi == NULL){
        return 1;
    }else {
        return 0;
    }
}

//ajouter au debut
pile empiler (pile pi, int val){
    elementpile *new;
    new=(elementpile*)malloc(sizeof(elementpile));
    new->valeur=val;
    new->suivant = pi;
    return new;
}

//afficher premier element
int tete_pile (pile pi){
    if (!est_vide(pi)){
        return(pi->valeur);
    }
}

//supprimer premier element (tete)
pile depiler(pile pi){
    elementpile *elt;
    if (!est_vide(pi)){
        elt=pi;
        pi=pi->suivant;
        free (elt);
    }
    return(pi);
}

//nombre d'element dans la pile
int taille_pile_it(pile pi){
    int n;
    pile p1;
    n=0;
    p1=pi;
    while(p1!=NULL){
        n++;
        p1=p1->suivant;
    }
    return (n);
}

int taille_pile_rec(pile pi){
    if (est_vide(pi)){
        return (0);
    } else {
        return (1+(taille_pile_rec(pi->suivant)));
    }
}

//afficher les element
void afficher_pile_it(pile pi){
    pile p1;
    if(est_vide(pi)){
        printf("Pile vide");
    } else {
        p1=pi;
        while(p1!=NULL){
            printf("%d\t",p1->valeur);
            p1=p1->suivant;
        }
    }
}

void afficher_pile_rec(pile pi){
    if(est_vide(pi)){
        printf("Pile vide");
    } else {
        printf("%d\t",pi->valeur);
        return(afficher_pile_rec(pi->suivant));
    }
}
 
//supprimer tout les elements 
pile vider_it(pile pi){
    elementpile *elt;
    if(est_vide(pi)){
        return creation();
    } else {
        elt=pi;
        while(!est_vide(pi)){
            elt=pi;
            pi=pi->suivant;
            free(elt);
        }
        return(creation());
    }
}

pile vider_it2 (pile pi){
    elementpile *elt;
    while(!est_vide(pi)){
        elt=pi;
        pi=pi->suivant;
        free(elt);
    }
    return(creation());
}

pile vider_rec(pile pi){
    elementpile *elt;
    if (est_vide(pi)){
        return (creation());
    }else {
        elt=pi;
        free(elt);
        return(vider_rec(pi->suivant));
    }
}