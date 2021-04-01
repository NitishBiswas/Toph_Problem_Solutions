#include <stdio.h>

int main()
{
    int m,n,i,j,c=0;
    scanf("%d%d", &m, &n);
    while(n!=0 , m!= 0){
        i = m%10;
        j = n%10;
        if(i+j > 9){
            c=1;
        }
        n/=10;
        m/=10;
    }
	if(c == 1){
		printf("Yes");
	}else{
		printf("No");
	}
    
    return 0;
}