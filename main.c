#include <stdio.h>
#include <string.h>

int main()
{
    for(int a=2;a<100;a++)
    {
        int arm=1;
    for(int i=2;i<a;i++)
    {
      if(a%i==0)
        {
        arm=0;break;
      }
      }
     if(arm==1)//ע��==�Ŵ�����ڣ�=����ֵ�����
        printf("%d ",a);
    }
    return 0;
}
