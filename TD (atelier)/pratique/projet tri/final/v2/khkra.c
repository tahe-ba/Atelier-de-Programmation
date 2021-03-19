#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
void extract(char * inp,int t[10],int * pp){
    int i,x=0;
    int temp;
    FILE * finp = fopen(inp, "r");
    //t =(int *)malloc(10*sizeof(int));
    for ( int j = 0; j < *pp; j++){
        fscanf(finp,"%d",&temp); 
    }    
    printf("%d",*pp);
    do{        
        for ( i = 0; i < 10; i++){
            fscanf ( finp,"%d",&t[i]);
        }
        qsort(t,10,sizeof(int),cmpfunc);
        x++;
    }while ((!feof(finp))&&x>10);
    fclose(finp);
    *pp +=10;
}
void tab_text(int t[10], char * out) {
    FILE * fout = fopen(out, "a+");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fout, "%d\n", t[i]);
    }  
    fclose(fout);
}
void main (){
    int tab[10];
    int pos=0;
    int temp,j;
    FILE * in = fopen("input.txt", "r");
    do{
    extract("input.txt",tab,&pos);
    tab_text(tab,"output.txt");
    for ( int j = 1; j < 10; j++){
        fscanf(in,"%d",&temp); 
    }    
    }while(!feof(in));
}