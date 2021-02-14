#include  <stdio.h>

int pgcd(int a, int b)
{
    if (b != 0)
       return pgcd(b, a%b);
    else 
       return a;
}


void main (){
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("le pgcd de %d et %d et %d\n",x,y,pgcd(x,y));
}