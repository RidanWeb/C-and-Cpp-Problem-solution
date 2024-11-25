#include <stdio.h>
int main(){


    int a, b, n;
    scanf("%d", &n);

    while(n){

        int sum = 0;
        scanf("%d %d", &a, &b);

        if(a <= b){

            for(int i = a+1; i < b; i++){

                if(i % 2 != 0){
                    sum += i;
                }
            }
        }else{

            for(int i = a-1; i > b; i--){

                if(i % 2 != 0){
                    sum += i;
                }
            }

        }
        printf("%d\n", sum);

        n--;

    }



    return 0;
}
