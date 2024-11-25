#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    ///upper part of pattern
    for(int i = 1; i <= n; i++){

        ///print space
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        ///print Star
        for(int j = 1; j <= (i*2)-1; j++){
            printf("*");
        }

        printf("\n");
    }

    ///lower part of pattern
    for(int i = 1; i <= n; i++){

        ///print space
        for(int j = 0; j < i-1; j++){
            printf(" ");
        }
        ///print Star
        for(int j = 1; j <= (n*2)-((i*2)-1); j++){
            printf("*");
        }

        printf("\n");
    }


    return 0;
}
