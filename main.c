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
        printf("��������%d\n",i);}
    }
     if(arm==1)//ע��==�Ŵ�����ڣ�=����ֵ�����
        printf("��������");
        else
        printf("�ⲻ������");
    return 0;
}
