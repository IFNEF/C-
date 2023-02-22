#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    scanf("%lf",&a);
    double z=a-23.0;
    if(z>=0){
        printf("ÕÒÄú%.2f\n",z);
    }
    else
    {
        printf("Ã»Ç®¹ö");
    }
    return 0;
}
