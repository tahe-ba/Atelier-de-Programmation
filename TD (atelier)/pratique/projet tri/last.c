#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
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
        mergeSort(arr,0,4);
        for ( i = 0; i < 5; i++){
            fprintf(f,"%d\n", arr[i]);
        }
        //printf("%d",x);
        x++;
    }while ((!feof(fp))&&(line_number(p)-(5*x)>0));

    r=(line_number(p))-(x*5)+5;
    //printf("%d",r);
    arr=(int *)malloc(r*sizeof(int));
    for (j=0;j<r;j++){
        fscanf( fp,"%d",&arr[j]); 
    }
    mergeSort(arr,0,r-1);
    for(j=0;j<r;j++){
        fprintf(f,"%d\n", arr[j]);
    }
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