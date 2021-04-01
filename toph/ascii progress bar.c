
#include<stdio.h>
#include<math.h>

int main()
{

    double a;
	int n;
    scanf("%lf",&a);
    int i;
    n=floor(a);
    printf("[");
    for(i=0;i<(n/10);i++)
        printf("+");
    for(i=0;i<10-(n/10);i++)
        printf(".");

    printf("] ");

    printf("%d%c",n,37);

}