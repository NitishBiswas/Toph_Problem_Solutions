#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
char ara[20];
gets(ara);
if(ara[0] >= 'a' && ara[0] < 'z') {
ara[0] = ara[0] + 'A' - 'a';
}

int l = strlen(ara), i, j;
ara[l] = '.';
l++;
for(i = 0; i < l; i++) {
    if(ara[i] == 'i') {
        ara[i] = '!';
    }
    else if(ara[i] == 's') {
        ara[i] = '$';
    }
    else if(ara[i] == 'o') {
        l++;
        for(j = l; j > i + 1; j--) {
            ara[j] = ara[j - 1];
        }
        ara[i] = '(';
        ara[i + 1] = ')';
    }
    else {
        continue;
    }
}
for(i = 0; i < l; i++) {
    printf("%c", ara[i]);
}
return 0;
}