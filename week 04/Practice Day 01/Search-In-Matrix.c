#include<stdio.h>
#include<string.h>


int main(){


    int n, m, x, flag = 0;

    scanf("%d %d", &n, &m);

    int array[n][m];

    for(int row = 0; row < n; row++){

        for(int col = 0; col < m; col++){

            scanf("%d", &array[row][col]);
        }
    }

    scanf("%d", &x);

    for(int row = 0; row < n; row++){

        for(int col = 0; col < m; col++){

            if(array[row][col] == x){

                flag++;
                break;
            }
        }
    }

    if(flag == 0){

        printf("will take number");

    }else{

        printf("will not take number");
    }

    return 0;

}
