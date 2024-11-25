#include<stdio.h>
#include <string.h>

int main()
{

    char str[1001];

    fgets(str, sizeof(str), stdin);

    int size = strlen(str);


    int flag = 0;

    for(int i = 0; i < size/2-2; i++){

        if(str[size-i-2] != str[i]){
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
