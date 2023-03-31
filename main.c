#include <stdio.h>
#include <string.h>

int main()
{
    int x=0,cnt=0;
    double sum=0;

    scanf("%d",&x);
    while(x!=-1)
    {
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0)
    {
        printf("%f",sum/cnt);
    }
    return 0;
}
