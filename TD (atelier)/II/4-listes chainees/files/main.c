#include <stdio.h>
#include <stdlib.h>
#include "file.h"



int main()
{
    File *maFile = initialiser();

    enfiler(maFile, 4);
    enfiler(maFile, 8);
    enfiler(maFile, 15);
    enfiler(maFile, 16);
    enfiler(maFile, 23);
    enfiler(maFile, 42);

    printf("\nEtat de la file :\n");
    afficherFile(maFile);

    printf("\nJe defile %d\n", defiler(maFile));
    printf("Je defile %d\n", defiler(maFile));

    printf("\nEtat de la file :\n");
    afficherFile(maFile);

    return 0;
}


