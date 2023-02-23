#include <stdio.h>
#include <string.h>

int main()
{
    int m=0,n=0,i=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i*m;
    }
    printf("%d",m);
    return 0;
}
