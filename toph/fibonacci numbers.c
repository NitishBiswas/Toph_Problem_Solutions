#include<stdio.h>

int main()
{
    int a=0,b=1,c,n,count = 1;
    scanf("%d",&n);
    c=a+b;
    while(1){
        count++;
        if(count == n)
            break;
        a=b;
        b=c;
        c=a+b;
    }
    printf("%d",c);
    return 0;
}