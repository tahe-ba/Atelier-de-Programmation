#include <stdio.h>

int somme(int n){
    if (n == 0){ 
       return 0;
    }
    else
       return n+somme(n-1);
}

void main (){
    int x;
    do{
    printf("x=");
    scanf("%d",&x);
    }while(x<0);
    printf("le somme des element de 0 a %d est %d\n",x,somme(x));
}