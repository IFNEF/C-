#include <stdio.h>
#include <string.h>

int main()
{
    int d=0,i=0,a=0;
    scanf("%d",&d);
    while(d>0){
        i=d%10;
        printf("%d",i);
        d/=10;
    }
    return 0;
}
