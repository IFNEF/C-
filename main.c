#include <stdio.h>
#include <string.h>

int main()
{
    int a=0,arm=1;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
      if(a%i==0){
        arm=0;
        printf("公因数：%d\n",i);}
    }
     if(arm==1)//注意==才代表等于，=代表赋值运算符
        printf("这是素数");
        else
        printf("这不是素数");
    return 0;
}
