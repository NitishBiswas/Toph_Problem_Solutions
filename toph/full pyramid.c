#include <stdio.h>

int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    for(i = 0; i<n; i++){
        c=0;
        for(j = i+1; j<n; j++){
            printf(" ");
            c++;
        }
       for(j = i+1; j>0; j--){
           printf("*");
           if(c<n-1){
               printf(" ");
               c++;
           }
       }
       if(i<n-1){
           printf("\n");
       }
    }

    return 0;
}