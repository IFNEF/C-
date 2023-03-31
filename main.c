#include <stdio.h>
#include <string.h>

int main()
{
    int x=0,cnt=0;
    double sum=0;
    int number[100];
    printf("输入以-1结尾的一串数：");
    scanf("%d",&x);
    while(x!=-1)
    {
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0)

    {
        printf("平均数：%f\n",sum/cnt);
        for(int i=0; i<cnt; i++)
        {
            if(number[i]>sum/cnt)
            {
                printf("比平均数大的数：%d\n",number[i]);
            }
        }
    }
    return 0;
}
