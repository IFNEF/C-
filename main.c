#include <stdio.h>
#include <string.h>

int main()
{
    int a=0,n=0;
    scanf("%d",&a);
    do{
        a/=10;
        n++;
    }
    while(a>0);
    printf("�����������λ��Ϊ��%d\n", n);
    return 0;
}
