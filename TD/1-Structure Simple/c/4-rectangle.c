#include<stdio.h>
void main()
{
    int longeur,largeur,surface,perimetre;
    printf("taper la longeur de rectangle : ");scanf("%d",&longeur);
    printf("taper la largeur de rectangle : ");scanf("%d",&largeur);
    surface=longeur*largeur;
    perimetre=(longeur+largeur)*2;
    printf("la surface de rectangle est egal %d et la perimetre egal %d\n",surface,perimetre);

}
