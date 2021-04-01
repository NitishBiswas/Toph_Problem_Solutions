#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>0 && n<9999){
        if(n%4 == 0 && n%400 != 0){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    return 0;
}