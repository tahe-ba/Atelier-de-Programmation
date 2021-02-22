#include <stdio.h>
#include <stdlib.h>
void main () {
   FILE * fp;
   char chain[80];
   int i;
   fp = fopen ("file.txt", "w");
    for (i=1;i<=3;i++){
        printf ("nom");
        scanf("%s",chain);
        fprintf(fp,"%s",chain);
    }
   fclose(fp);   
}