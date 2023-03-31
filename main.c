#include <stdio.h>
#include <string.h>

int main()
{
    int d=0,i=0,a=0,r=0;
    scanf("%d",&d);
    while(d>0){
        i=d%10;
        printf("%d",i);//700输出007（9位以内的数）
        d/=10;
        r=r*10+i;

    }
            printf("\n%d",r);//700输出7
    return 0;
}
