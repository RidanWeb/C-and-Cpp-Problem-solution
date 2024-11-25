#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char x[50];
    char y[50];
    char z[50];

    scanf("%s %s %s", x, y, z);

    char min[50], max[50];

    int a = strcmp(x, y);///1 ///2
    int b = strcmp(x, z);///1

    int c = strcmp(y, z);///2

    ///for minimum===============
    if(a < 0 && b < 0){

        strcpy(min, x);

    }else if(a > 0 && c < 0){

        strcpy(min, y);

    }else{

        strcpy(min, z);
    }
    ///===========================

    ///for maximum================
    if(a > 0 && b > 0){

        strcpy(max, x);

    }else if(a < 0 && c > 0){

        strcpy(max, y);

    }else{

        strcpy(max, z);
    }

    printf("%s\n%s", min, max);

    return 0;
}
