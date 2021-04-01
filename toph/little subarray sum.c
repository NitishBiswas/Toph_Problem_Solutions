#include<stdio.h>

int main()
{
    int n,a,b,i,sum=0;
    scanf("%d %d %d", &n, &a, &b);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=a;i<=b;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);

}