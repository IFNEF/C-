#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=0,b=0,c=0,max=0;
    scanf("%lf%lf%lf",&a,&b,&c);
    max=a;
    if(max<b)
    {
        max=b;
        if(max<c)
        {
            max=c;
        }
    }
    else
    {
        if(max<c)
        max=c;
    }
    printf("最大值为：%lf",max);
    return 0;
}
