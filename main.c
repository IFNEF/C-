#include <stdio.h>
#include <string.h>

int main()
{
    int x=0,cnt=0;
    double sum=0;
    int number[100];
    printf("������-1��β��һ������");
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
        printf("ƽ������%f\n",sum/cnt);
        for(int i=0; i<cnt; i++)
        {
            if(number[i]>sum/cnt)
            {
                printf("��ƽ�����������%d\n",number[i]);
            }
        }
    }
    return 0;
}
