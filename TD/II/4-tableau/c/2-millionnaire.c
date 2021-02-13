# include<stdio.h>
void main(){
int sal=1,i=1,gain;
gain=sal;
do{
/*printf("sal: %d\n",sal);
printf("-----------\n");
printf("gain: %d\n",gain);
printf("-----------\n");*/
sal *= 2;
//gain+=sal;
i++;
}while(sal<1000000000);
printf ("il faut %d jour pour devenir millionnaire\n",i);
}