#include<stdio.h>

int main(){

    int x;
    scanf("%d", &x);
//
//    for(int i = 1; i <= x; i++){
//
//        for(int j = 1; j <= i; j++){
//            printf("%d", j);
//        }
//        printf("\n");
//    }

        for(int i = x; i >= 1; i--){

            for(int j = i; j >= 1; j--){
                printf("%d", j);
            }
            printf("\n");
        }



    return 0;

}
