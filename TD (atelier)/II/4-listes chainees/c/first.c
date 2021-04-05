#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element
{
    int info;
    element *suivant;
};

typedef element* liste;

liste initialisation(){
    return NULL;
}

int vide(liste li){
    if (li == NULL){
        return 1;
    } else {
        return 0;
    }
}

void afficher(liste li){
    liste lili;
    if (li == NULL){
        printf("is empty\n");
    }else 
    lili=li;
    //lili current 
    while (lili != NULL)
    {
        printf("%d -> ", lili->info);
        lili = lili->suivant;
    }
}

liste ajout_debut(liste li, int new){
    element *nouveau = malloc(sizeof(element));
    nouveau->info = new;
    nouveau->suivant = li;
    return nouveau;
}

liste supprimer_debut(liste li){
    element *premier_element = malloc(sizeof(element));
    if (li == NULL){
        return NULL;
    }else{
        premier_element=li;
        li=li->suivant;
        free(premier_element);
        return(li);
    }
}

liste ajout_fin(liste li, int new){
    element *nouveau = malloc(sizeof(element));
    element *dernier_element = malloc(sizeof(element));

    nouveau->info = new;
    nouveau->suivant = NULL;
    if (li == NULL) {
        return nouveau;
    }else {
        dernier_element=li;
        while(dernier_element->suivant!=NULL){
            dernier_element=dernier_element->suivant;
        }
        dernier_element->suivant=nouveau;
        return li;
    }
}

liste supprimer_fin(liste li){
    element *dernier_element = malloc(sizeof(element));
    element *avant_dernier_element = malloc(sizeof(element));

    if (li == NULL) {
        return NULL;
    } else {
        if(li->suivant==NULL){
            dernier_element=li;
            free(dernier_element);
            return NULL;
        }
        /* or
         if(li->suivant==NULL){
            free(li)
            return NULL;
        }
        */
       else{
            dernier_element=li;
            while(dernier_element->suivant!=NULL){
                avant_dernier_element=dernier_element;
                dernier_element=avant_dernier_element->suivant;
            }
            avant_dernier_element->suivant=NULL;
            free(dernier_element);
            return(li);
       }
    }
}

void main(){
    liste l;
    l=initialisation();
    //if (vide(l)==1){ printf("is empty\n"); }
    //afficher(l);
    l=ajout_debut(l,2);
    l=ajout_debut(l,1);
    l=ajout_fin(l,3);
    l=ajout_debut(l,0);
    l=ajout_fin(l,4);
    //l=supprimer_debut(l);
    l=supprimer_fin(l);
    afficher(l);

}