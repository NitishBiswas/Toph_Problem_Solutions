#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c = a/b;
    d = a-(b*c);
    printf("%d %d %d",c,d,b);

    return 0;
}