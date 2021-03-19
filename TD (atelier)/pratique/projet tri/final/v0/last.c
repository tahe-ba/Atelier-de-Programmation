#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
return ( *(int*)a - *(int*)b );
}
void shownums ( char *p ){
    FILE *fp ;
    int i ;
    fp = fopen ( p, "r" ) ;
    if ( fp == NULL )
    {
        printf ( "Unable to open file." ) ;
        getc;
        exit ( 0 ) ;
    }
    while ( fscanf ( fp,"%d",&i ) == 1 )
        printf ( "%d \t", i ) ;
    printf("\n");
    fclose ( fp ) ;
}
int line_number (char *p){
    FILE *f;
    int tmp,i=0;
    f=fopen(p,"r");
    while(fscanf(f,"%d",&tmp)==1){
        i++;
    }
    return i;

}
void split_arrays(char *p ){
    FILE *fp ,*f ;
    int *arr ;
    int i=0,x=1,r,j;
    int arr_size=0;
    fp = fopen ( p, "r" ) ;
    f=fopen("output.txt","wa");
    arr =(int *)malloc(5*sizeof(int));

    do{        
        free(arr);
        for ( i = 0; i < 5; i++){
            fscanf ( fp,"%d",&arr[i]);
        }
        qsort(arr,5,sizeof(int),cmpfunc);
        for ( i = 0; i < 5; i++){
            fprintf(f,"%d ", arr[i]);
        }
        fprintf(f,"\n");

        //printf("%d",x);
        x++;
    }while ((!feof(fp))&&(line_number(p)-(5*x)>0));

    r=(line_number(p))-(x*5)+5;
    //printf("%d",r);
    arr=(int *)malloc(r*sizeof(int));
    for (j=0;j<r;j++){
        fscanf( fp,"%d",&arr[j]); 
    }
    qsort(arr,r,sizeof(int),cmpfunc);
    for(j=0;j<r;j++){
        fprintf(f,"%d ", arr[j]);
    }
    fprintf(f,"\n");
    int tmp [x][4];
    
    fclose(f);
    fclose(fp);
    
}

void main( ){
    char str[10] ;

    printf ( "Enter file name .txt : " ) ;
    scanf ( "%s", str ) ;

    printf ( "Numbers before sorting:\n" ) ;
    shownums ( str ) ;

    split_arrays(str);
}