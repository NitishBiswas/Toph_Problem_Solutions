#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],a,ch;
    int n,i;
    scanf("%d",&n);
    a = getchar();
    gets(str);
    for(i = 0; str[i] != '\0'; ++i){
        ch = str[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - n;
            if(ch < 'a'){
                ch = ch + 26;
            }
            str[i] = ch;
        }
    }
    puts(str);
}