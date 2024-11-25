#include<stdio.h>
#include <stdlib.h>

int main(){

    int n, x, flag = 0;
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++){

        scanf("%d", &array[i]);
    }

    scanf("%d", &x);

    for(int i = 0; i < n; i++){

        if(array[i] == x){
            printf("%d", i);
            flag++;
            break;
        }
    }

    if(flag == 0){

       printf("-1");
    }




    return 0;

}
