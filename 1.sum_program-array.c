#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int sum_array(int *pinakas, int n);

int main() {
    int pinakas[SIZE];
    int i,sum,N=20;
    
    /* Initialization of an array with 20 places with random numbers in range 1 to 30 */
    init_array(pinakas,N,1,30);
    
    /* Printing of the array */
    printf("Array Of Data: \n");
    print_array(pinakas,N);
    printf("\n\n");
    
    /* Printing the summary of the values of the array */
    printf("\nThe summary of the values of the array is: %d",sum_array(pinakas,N));
}

void init_array(int *pinakas, int n, int a, int b) {
    int i;
    srand(time(NULL));
    for (i=0; i<n; i++) {
        pinakas[i]=a+rand()%(b-a+1);
    }
}

void print_array(int *pinakas,int n) {
    int i;
    printf("[");
    for (i=0; i<n; i++) {
        printf("%d ",pinakas[i]);
    }
    printf("%d]",pinakas[n-1]);
}

int sum_array(int *pinakas, int n) {
    int i, sum;
    sum=0;
    for (i=0; i<n; i++) {
        sum+=pinakas[i];
    }
    return sum;
}