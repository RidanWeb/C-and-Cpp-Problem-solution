#include<stdio.h>

int array2[100005];

int main(){


    int n,m;
    scanf("%d %d", &n, &m);

    int array[n];

    for(int i = 0; i < n; i++){

        scanf("%d", &array[i]);
    }


    for(int i = 0; i < n; i++){

        array2[array[i]]++;
    }

    for(int i = 1; i <= m; i++){

        printf("%d\n", array2[i]);
    }




    return 0;

}
