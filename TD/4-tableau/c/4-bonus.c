#include<stdio.h>
void main(){
float t[100];
int i,n;

  do {
    printf("nombre d'etudiant :");
    scanf("%d", & n);
  } while (!(n >= 1));

for (i = 1; i <=n; i++) {
    do{
    printf("note etudiant %d :",i);
    scanf("%f", & t[i]);
    }while((t[i])<0||(t[i]>20));
}


printf("note avant modification\n");
for(i=1;i<=n;i++){
    printf("%.2f\t", t[i]);
}
printf("\n");

for (i = 1; i <=n; i++) {
    if ((t[i])<10){
        t[i]+=2;
    }else if (((t[i])>=10)&&((t[i])<=15)){
        t[i]+=1.5;
    }else if (t[i]>15){
        t[i]+=1;
            if (t[i]>=20){
                t[i]=20;
            }
    }
}

printf("note apres modification\n");
for(i=1;i<=n;i++){
    printf("%.2f\t", t[i]);
}
printf("\n");
}