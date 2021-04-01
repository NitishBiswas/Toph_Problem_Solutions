#include <stdio.h>

int main()
{
    int a,b,c,r;
    scanf("%d%d",&a,&b);
    c = b;
    if(a>0 && b>0 && a<= 150 && b<=150){
        if(b%a == 0){
            printf("0");
        }else{
            while(1){
                r = b%a;
                if(r == 0){
                    printf("%d",b-c);
                    break;
                }else{
                    b++;
                }
            }
        }
    }

    return 0;
}