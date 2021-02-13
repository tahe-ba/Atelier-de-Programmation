#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char ch[100];
    int i,n;
    int all[26];
//chaine input
printf("phrase: ");
scanf("%s", ch);

//initialize alphabet array
for (i='a';i<='z';i++){
    all[i]=0;
}

//count present letters in string -> in all
for (i=0;i<(strlen(ch));i++){
    all[tolower(ch[i])]++;
}


//print present letters
for (i='a';i<='z';i++){
    if (all[i]!=0) {
        printf("%c \t",i);
    }
}

printf("\n");

//print occuence number
for (i='a';i<='z';i++){
    if (all[i]!=0) {
        printf("%d \t",all[i]);
    }
}
printf("\n");
}