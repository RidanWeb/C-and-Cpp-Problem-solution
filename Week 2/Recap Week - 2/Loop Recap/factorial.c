#include <stdio.h>
int main(){


    int n;

    int tc;
    scanf("%d", &tc);

    while(tc){

        int fact = 1;

        scanf("%d", &n);

        if(n == 0){
            printf("%d\n", 1);
            tc--;
            continue;
        }

        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        printf("%d\n", fact);

        tc--;

    }

    return 0;
}
