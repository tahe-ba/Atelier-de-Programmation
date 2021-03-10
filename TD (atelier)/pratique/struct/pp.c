#include <stdio.h>
#include <math.h>

  typedef struct {
        float abs;
        float ord;
    }point;

void main (){
point p;
point* pp;

p.abs=3.75;
p.ord=0.75;

pp =&p;
pp->abs=5.5;
pp->ord=3.25;

printf("%p\n",pp);
printf("abs=%.2f\n",pp->abs);
printf("ord=%.2f\n",pp->ord);

printf("\nabs=%.2f\n",p.abs);
printf("ord=%.2f\n",p.ord);

}