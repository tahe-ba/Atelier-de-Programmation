#include <stdio.h>

int factoriel(int n){
    if (n == 0){ 
       return 1;
    }
    else
       return n*factoriel(n-1);
}

void main (){
    int x;
    do{
    printf("x=");
    scanf("%d",&x);
    }while(x<0);
    printf("le factoriel de %d est %d\n",x,factoriel(x));
}