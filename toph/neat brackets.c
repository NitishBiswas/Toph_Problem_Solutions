#include<stdio.h>
#include<string.h>
int main()
{
    int top=-1,c=1;
    char s[25],stack[25];
    scanf("%s", s);
    int i,l=strlen(s);
    for(i=0; i<l; i++){
        if(s[i]=='('){
            top++;
            stack[top]=s[i];
           }
        else if(s[i]==')'){
            if(top==-1){
                c=0;
                break;
            }
            else if(stack[top]=='('){
                top--;
            }
        }
    }
    if(c==0){
        printf("No");
    }
    else if(top==-1){
        printf("Yes");
    }
    else printf("No");
}