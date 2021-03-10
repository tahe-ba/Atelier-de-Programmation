#include <stdio.h>
void main (){
typedef struct{
    float abs;
    float ord;
}point;

point p1,p2,p3;
point t[10];

p1.abs=10.2;
p1.ord=0.75;

p2.abs=10.2;
p2.ord=0.75;

p3.abs=p1.abs+p2.abs;
p3.ord=p1.ord+p2.ord;

printf("%f\n%f\n",p3.abs,p3.ord);

for(i=0;i<=0;i++){
    t[i].abs;
    t[i].ord;
}

}
