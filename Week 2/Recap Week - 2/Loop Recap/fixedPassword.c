#include<stdio.h>

int main(){

    int pass;

    while(pass != 1999){

        scanf("%d", &pass);
        if(pass != 1999){

            printf("Wrong\n");

        }else{

            printf("Correct\n");

        }

    }

    return 0;
}
