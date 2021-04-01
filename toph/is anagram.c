#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int c,d,count = 0;
    scanf("%s%s",a,b);
    c = strlen(a);
    d = strlen(b);
    if(c == d){
        for(int i = 0; i < c; i++){
            for(int j = 0; j < d; j++){
                if(a[i] == b[j]){
                    count++;
                    break;
                }
            }
        }
        if(count>=c){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }

    return 0;
}
