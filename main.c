#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int e,f=0;
    e=abs(60*(a-c)+b-d);
    if(e>60)
    {
        f=e%60;
        e=e/60;
        printf("�������ʱ��%dʱ%d��",e,f);
    }
    else
    {
    f=e;
    printf("�������ʱ��%d��",f);
    }
    return 0;
}
