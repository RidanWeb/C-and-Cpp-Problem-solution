#include<stdio.h>
#include<string.h>

int freq[2];

int main(){

    int n;
    scanf("%d", &n);

    char s[n];

    scanf("%s", s);

    int len = strlen(s);

    for(int i = 0; i < len; i++){

        char x = s[i];

        int d = x - 48;

        freq[d]++;
    }

    for(int i = 0; i < 2; i++){

        printf("%d ", freq[i]);
    }


    return 0;

}
