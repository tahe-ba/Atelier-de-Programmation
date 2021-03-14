#include <stdio.h> 
#include <stdlib.h>
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* temp */
    int L[n1], R[n2];
 
    /* devide to two sub arrays*/
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* merge the temp arrays back into arr[l..r]*/
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
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

int lines_in_file(char filename[]) {
    FILE *fn;
    int tmp,n=0;
    fn = fopen(filename, "r"); 
    while (fscanf(fn, "%d", &tmp)==1) {
        n++;
    }
    fclose(fn);
    return (n);
}

void array_to_file(int t[],char filename[],int n) {
    FILE *fn;
    int i;
    fn = fopen(filename, "w"); 
    for (i = 0; i < n; i++)
    {
		fprintf(fn, "%d \n", t[i]);
    }
    fclose(fn);
}


int main() 
{ 
	int i = 0,a; 
    int *arr;

	FILE* fptr;

    int n;
    n = lines_in_file("input.txt");
    //printf("%d",n);

    arr=(int *)malloc(n*sizeof(int));

    fptr = fopen("input.txt", "r"); 

    //fill array from file
    while (fscanf(fptr, "%d", &arr[i]) == 1) {
            i++;
        }
    fclose(fptr);
    
    printArray(arr,n);
	mergeSort(arr, 0, n-1);
	printArray(arr,n);

    array_to_file(arr,"output.txt",n);
	return 0; 
} 
