#include <stdio.h>

int main()
{
    int n,count = 0;
    scanf("%d",&n);
    if(n>0 && n<1000){
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                count++;
            }
        }
        if(count == 0){
            printf("Yes");
        }else{
            printf("No");
        }
    }

    return 0;
}