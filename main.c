#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score=0,s=0;
    char level;
    scanf("%d",&score);
    s=score/10;
    switch(s)
    {
    case 6:
    level='d';
    break;
    case 7:
    level='c';
    break;
    case 8:
    level='b';
    break;
    case 9:
    level='a';
    break;
    case 10:
    level='s';
    break;
    default:
    level='e';
    break;
    }
    printf("您的等级%c",level);
    return 0;
}
