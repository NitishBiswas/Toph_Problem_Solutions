#include <stdio.h>

int main()
{
    int n,count = 0;;
    scanf("%d",&n);
    int a[n];
    if(n>0 && n<100){
        for(int i = 0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(int i = 0; i<n-1; i++){
            if(a[i]>=1 && a[i]<1000){
                if(a[i] <= a[i+1]){
                    count++;
                }else{
                    printf("No");
                    return 0;
                }
            }
        }
        if(count == n-1){
            printf("Yes");
        }
        
    }

    return 0;
}