#include<stdio.h>

int main()
{

    char str[1000000];

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){

        if(str[i] >= 'a' && str[i] <= 'z'){

            printf("%c", str[i]-32);

        }else if(str[i] >= 'A' && str[i] <= 'Z'){

            printf("%c", str[i]+32);

        }else if(str[i] == ','){

            printf("%c", ' ');

        }
    }


    return 0;
}
