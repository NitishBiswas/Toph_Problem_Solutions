#include <stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n>=0 && n<=999){
        printf("%d",n);
    }else if(n>=1000 && n<=999999){
        a = n%1000;
        n/=1000;
        printf("%d\n",a);
        if(a>9 && a<99){
            printf("%d,0%d",n,a);
            return 0;
        }else if(a>=0 && a<=9){
            printf("%d,00%d",n,a);
            return 0;
        }
        printf("%d,%d",n,a);
    }else if(n>=1000000 && n<999999999){
        b = n/1000000;
        c = n%1000000;
        a = c%1000;
        n=c/1000;
        if(n>9 && n<=99){
            if(a>9 && a<99){
            printf("%d,0%d,0%d",b,n,a);
            return 0;
        }else if(a>=0 && a<=9){
            printf("%d,0%d,00%d",b,n,a);
            return 0;
        }
        }else if(n>=0 && n<=9){
            if(a<99){
            printf("%d,00%d,00%d",b,n,a);
            return 0;
        }else{
            printf("%d,00%d,%d",b,n,a);
            return 0;
        }
        }
        printf("%d,%d,%d",b,n,a);
    }

    return 0;
}