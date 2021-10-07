#include <stdio.h>

int main()
{
    int a,b,c,max;
    printf("ENTER THREE NUMBERS: ");
    scanf("%d %d %d ",&a,&b,&c);
    max = a>b?a>c?a:b:c>b?c:b;
    printf("GREATEST OF THREE  UMBERS IS %d\n",max);
    return 0;
}
