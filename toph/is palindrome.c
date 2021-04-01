#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l/2;i++){
        if(s[i]!=s[l-1-i]){
            printf("No");
            goto diu;
        }
    }
    printf("Yes");
    diu:
    return 0;
}