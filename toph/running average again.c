#include<stdio.h>

int main()
{
    int n,i;
    double avg,sum=0;
    scanf("%d", &n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
        sum=sum+num[i];
        avg=sum/(i+1);
        printf("%.10lf\n",avg);
    }
    return 0;

}