#include <stdio.h>
#include <string.h>

int main()
{
    int x=0;
    int count[10];
    int i=0;
    for(i=0; i<10; i++)//�����ʼ��
    {
        count[i]=0;
    }
    scanf("%d",&x);
    while(x!=-1)//����ͳ��
    {
        if(x>=0&&x<=9)
        {
            count[x]++;
        }
        scanf("%d",&x);

    }
    for(i=0; i<10; i++) //ͳ�����
    {

        printf("%d��%d\n",i,count[i]);
    }
    return 0;
}
