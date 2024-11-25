#include<stdio.h>
int main()
{

    int n; scanf("%d", &n);

    int arr[n];

    for(int i= 0; i < n; i++){

        scanf("%d", &arr[i]);
    }

    int flag = 0;

    for(int i = 0; i < n/2; i++){

        if(arr[n-i-1] != arr[i]){
            flag++;
            break;
        }

    }

    if(flag == 0){
        printf("YES");
    }else{
        printf("NO");
    }





    return 0;
}
