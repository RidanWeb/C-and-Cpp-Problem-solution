#include<stdio.h>

int main(){

    int a, b;
    char n;

    scanf("%d %c %d", &a, &n, &b);

    if(n == '='){

        if(a == b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }else if(n == '>'){

        if(a > b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }else if(n == '<'){

        if(a < b){
            printf("Right");
        }else{
            printf("Wrong");
        }
    }




    return 0;

}
