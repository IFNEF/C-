#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    int b=a/30.48;
    int c=((a/30.48)-b)*12;
    printf("������Ϊ%d��%d��",b,c);
    return 0;
}
