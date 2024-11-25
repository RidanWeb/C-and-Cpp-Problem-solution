#include<stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    int a = x %10;
    x /= 10;
    int b = x;

    if(a % b == 0 || b % a == 0){

        printf("YES");
    }else{

        printf("NO");
    }



    return 0;

}
