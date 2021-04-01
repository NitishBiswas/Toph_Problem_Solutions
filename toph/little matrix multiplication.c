#include<stdio.h>

int main()
{
    int a[2][2],b[2][2],sum,i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}