#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,c;
    int m=0;
    int exit=0;
    scanf("%d",&m);
    for(c=1; c<m*10; c++)
    {
        for(b=1; b<m*5; b++)
        {
            for(a=1; a<m*2; a++)
            {
                if(a*5+b*2+c==m*10)
                {
                    printf("%d个五角%d个贰角%d个一角\n",a,b,c);
                    exit=1;
                    break;
                }
            }
            if(exit==1)break;//接力break，如果上一个break触发则自动触发，或者使用goto out;然后在需要出的地方写out:可直接跳出循环。
        }
        if(exit==1)break;
    }

    return 0;
}
