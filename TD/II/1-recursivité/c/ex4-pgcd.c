#include  <stdio.h>

int pgcd(int nbr1, int nbr2)
{
    if (nbr2 != 0)
       return pgcd(nbr2, nbr1%nbr2);
    else 
       return nbr1;
}


void main (){
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("le pgcd de %d et %d et %d\n",x,y,pgcd(x,y));
}