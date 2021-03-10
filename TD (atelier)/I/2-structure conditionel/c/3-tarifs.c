#include <stdio.h>
void main()
{
    float p;
    int pr;
printf("poids du collier (en gram): ");
scanf("%f", &p);
if (p<20){
    pr=250;
} else if (p<50){
    pr=500;
}else {
    pr=1000;
}
printf("prix du timbre est %d millimes\n",pr);
}