#include <stdio.h>
#include <string.h>

int main()
{
    int a=rand()%100+1,b=0;
    do{

    scanf("%d",&b);
        if(b>a)
        printf("����\n");
        else if(b<a)
            printf("С��\n");
    }
    while(b!=a);
    printf("���¶���");
    return 0;
}
