#include <stdio.h>
#include <string.h>
int main()
{
    const int number=11;//数组的大小
    int x=0;
    int count[number];//定义数组
    int i=0;
    for(i=0; i<number; i++)//数组初始化
    {
        count[i]=0;
    }
    scanf("%d",&x);
    while(x!=-1)//数据统计
    {
        if(x>=0&&x<=number-1)
        {
            count[x]++;//数组参与运算
        }
        scanf("%d",&x);

    }
    for(i=0; i<number; i++) //统计输出（遍历数组输出）
    {

        printf("%d：%d\n",i,count[i]);
    }
    return 0;
}
