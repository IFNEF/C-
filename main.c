#include <stdio.h>
#include <string.h>

int main()
{
    int a=rand()%100+1,b=0,t=0;
    do{

    scanf("%d",&b);
    t++;
        if(b>a)
        printf("大了\n");
        else if(b<a)
            printf("小了\n");
    }
    while(b!=a);
    printf("您猜对了,使用%d次就猜出了随机数结果。",t);
    return 0;
}
