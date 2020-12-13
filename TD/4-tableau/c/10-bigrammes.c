#include <stdio.h>
#include <string.h>

void main(){

    char phrase[100],val[100];
    int i, occ,x;

    printf("phrase: ");
    scanf("%s",phrase);
do{
    printf("saisir les deux lettres a rechercher: ");
    scanf("%s",val);
}while(strlen(val)!=2);

i=0;
occ=0;
    for (i=0;i<=(strlen(phrase))-1;i++){
        if ((phrase[i]==val[0])&&(phrase[i+1]==val[1])){
            occ++;
        }
    }

    printf("il y a %d bigrammes\n", occ);
}