#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    long long int array[n];

    for(int i = 0; i < n; i++){
        scanf("%lld", &array[i]);
    }

    long long int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        if(array[i] > maxi){
            maxi = array[i];
        }
    }

    for(int i = 0; i < n; i++){
        printf("%lld ", (maxi - array[i]));
    }

    return 0;
}
