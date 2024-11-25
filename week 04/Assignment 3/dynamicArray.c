#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int *array = (int *)malloc(1*sizeof(int));

    int n;
    scanf("%d", &n);

    array = (int *)realloc(array, n*sizeof(int));

    int *temp = array;

    if(array == NULL){

        array = temp;
    }

    for(int i = 0; i < n; i++){

        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++){

        printf("%d ", array[i]);
    }

    return 0;
}
