#include<stdio.h>
#include <string.h>

int main()
{

    int tc; scanf("%d", &tc);

    char str[101];

    while(tc){

        scanf("%s", str);

        int size = strlen(str);

        if(size <= 10){

            printf("%s\n", str);

        }else{

            printf("%c%d%c\n", str[0], size-2, str[size-1]);

        }

        tc--;
    }


    return 0;
}
