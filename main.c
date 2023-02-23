#include <stdio.h>
#include <string.h>

int main()
{
    int m=0,n=0,i=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//做求和的程序时，记录结果的变量应该初始化为0，而做求积的变量时，记录结果的变量应该初始化为l

    {
        m=i*m;
    }
    printf("%d",m);
    return 0;
}
