#include<stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    int flag = 0;
    for(int i = 2; i <= x; i++){

        if(i%2 == 0){
            printf("%d\n", i);
            flag++;
        }
    }

    if(flag == 0){

        printf("%d", -1);
    }



    return 0;

}
