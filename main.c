#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    scanf("%lf",&a);
    double z=a-23.0;
    if(z>=0){
        printf("找零：%.2f元\n",z);
    }
    else
    {
        printf("没钱滚。");
    }
    return 0;
}
