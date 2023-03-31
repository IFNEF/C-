#include <stdio.h>
#include <string.h>
int main()
{
    const int maxNumber = 25;
    int isPrime [maxNumber];
    int i;
    int x;
    for ( i=0; i<maxNumber; i++ )//比25小的数--所有数i
    {
        isPrime[i] = 1;
    }
    for ( x=2; x<maxNumber; x++ )//i的小于25的所有倍数
    {
        if ( isPrime [x] )
        {
            for ( i=2; i*x<maxNumber; i++ )
            {
                isPrime [i*x] = 0;
            }
        }
    }
    for ( i=2; i<maxNumber; i++ )
    {
        if ( isPrime [i] )
        {
            printf("%d\t", i);
        }
    }
    printf( "\n") ;

    return 0;
}

