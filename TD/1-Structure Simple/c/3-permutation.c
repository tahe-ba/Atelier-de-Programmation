#include<stdio.h>
void main()
{
    int x,y,aux;
    printf("taper le 1er entier x: ");scanf("%d",&x);
    printf("taper le 2eme entier y: ");scanf("%d",&y);
    aux=x;
    x=y;
    y=aux;
    printf("les nouvelles valeurs sont x=%d et y=%d\n",x,y);
}