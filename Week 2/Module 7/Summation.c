#include<stdio.h>
#include <stdlib.h>

int main(){

    int n;
    long long int sum = 0;
    scanf("%d", &n);
    int  array[n];

    for(int i = 0; i < n; i++){

        scanf("%lld", &array[i]);

        sum += array[i];
    }

    int ans = abs(sum);

    printf("%lld", ans);


    return 0;

}

///========================================================

#include<stdio.h>
#include <stdlib.h>

int main(){

    int n;
    long long int sum = 0;
    scanf("%d", &n);
    int  array[n];

    for(int i = 0; i < n; i++){

        scanf("%lld", &array[i]);

        sum += array[i];
    }

    if (sum<0)
    {
        sum = (-1)*sum;
    }

    printf ("%lld", sum);

    return 0;

}

///=================================================






//#include<stdio.h>
//int main ()
//{
//    //  number 1 summation
//
//    long long int  N ;
//    scanf ("%lld", &N);
//    int A[N];
//    for (int h= 0; h<N; h++)
//    {
//        scanf ("%d", &A[h]);
//    }
//     long long int sum = 0;
//    for (int w = 0; w<N; w++)
//    {
//        sum = sum + A[w];
//    }
//    if (sum<0)
//    {
//        sum = (-1)*sum;
//    }
//
//    printf ("%lld", sum);
//}
