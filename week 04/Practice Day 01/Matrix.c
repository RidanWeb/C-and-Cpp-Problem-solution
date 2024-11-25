#include<stdio.h>
#include<string.h>
#include<math.h>


int main(){


    int n;

    scanf("%d", &n);

    int array[n][n];

    for(int row = 0; row < n; row++){

        for(int col = 0; col < n; col++){

            scanf("%d", &array[row][col]);
        }
    }

    int mainD = 0, secD = 0;

    for(int row = 0; row < n; row++){

        for(int col = 0; col < n; col++){

            if(row == col){

                mainD += array[row][col];

            }

            if(row + col == n -1){

                secD += array[row][col];

            }
        }
    }


    printf("%d", abs(mainD - secD));

    return 0;

}
