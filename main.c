#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,i=0;
    scanf("%d",&m);
    for(i=1;m>9;i++)
    {
        m/=10;
    }
    printf("这是%d位数",i);
    return 0;
}
