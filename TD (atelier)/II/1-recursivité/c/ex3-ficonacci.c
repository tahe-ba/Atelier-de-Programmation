#include <stdio.h>

int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}


void main (){
    int x;
    do{
    printf("x=");
    scanf("%d",&x);
    }while(x<0);
    printf("f[%d]=%d\n",x,fibonacci(x));
}