#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    int b=a/30.48;
    int c=((a/30.48)-b)*12;
    printf("你的身高为%d尺%d寸",b,c);
    return 0;
}
