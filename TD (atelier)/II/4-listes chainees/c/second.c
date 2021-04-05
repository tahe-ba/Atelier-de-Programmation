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
