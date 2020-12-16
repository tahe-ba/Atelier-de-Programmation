#include <stdio.h>
void main(){
    int x,y,z,t=1;
    do{
        printf("x=");
        scanf("%d",&x);
    }while ((x<0)||(x>9999));
    do{
        printf("y=");
        scanf("%d",&y);
    }while ((y<0)||(y>9999));
   while (t <= y){
    t =t* 10;
    printf("%d\n",t);
   }
   z=x*t + y;
printf("x+y=%d\n",z);
}