#include<stdio.h>
void main(){
int t[100];
int i,j,n,f=0,r,tmp;

//size array input
  do {
    printf("taille :");
    scanf("%d", & n);
  } while (!(n >= 1));

// array input
for (i = 1; i <=n; i++) {
    printf("element[%d]:", i);
    scanf("%d", & t[i]);
}

/*
//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n^^^ TABLEAU ^^^\n");
*/

//tri croissant
for(i = 1; i <= n; i++) {                                                                                                    
      for(j = i+1; j <= n; j++){    //On verifie s'il n'y a pas de nombre inférieur                      
          if(t[j] < t[i]){                                                                  
              tmp = t[i];              
              t[i] = t[j];                                                       
              t[j] = tmp;                                                    
            }                                                                  
        }                                                                      
    }                                                                 


/*
//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n^^^ TABLEAU ^^^\n");
*/

//input entier a recherche 
    printf("valeur a rechercher : ");
    scanf("%d",&r);

//recherche de l'indice de la valeur a rechercher
i=1;
do{
    if (r==(t[i])) {
        f=i;
        printf("l'entier %d se trouve dans t[%d]\n",r,f);
    }else {
    i++;
    }
}while((f!=i)&&(i<=n)) ;
if (f!=i){
    printf("l'entier %d n'est pas present dans le tableau\n",r);
}
}