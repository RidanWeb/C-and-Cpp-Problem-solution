#include<stdio.h>
#include<string.h>

char s[10000005];
int freq[26];

int main(){


    scanf("%s", s);

    int len = strlen(s);

    for(int i = 0; i < len; i++){

        char ch = s[i];

        int indx = ch - 97;

        freq[indx]++;

    }

    for(int i = 0; i < 26; i++){

        if(freq[i] != 0){
            printf("%c : %d\n", 97+i, freq[i]);
        }

    }




    return 0;

}
