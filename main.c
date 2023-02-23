#include <stdio.h>
#include <string.h>

int main()
{
    int s=0,x=0,n=0;
    double a=0;
    do{
    scanf("%d",&x);
    if(x!=-1)
    {
      s+=x;
      n++;
      a=s/n;
    }
    }
    while(x!=-1);
    printf("%d个数的均值为%.2lf。",n,a);
    return 0;
}
