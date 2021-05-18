#include<stdio.h>

int main()
{
    int n,s,temp,count=0,c=0,i,p,result;

    scanf("%d", &n);
    s=n;
    while(n!=0)
    {
      temp=n%2;
      if(temp==1)
        count++;
      n=n/2;
    }
    for(i=s-1;i>=1;i--)
    {
        p=i;
         while(p!=0)
    {
      temp=p%2;
      if(temp==1)
        c++;
      p=p/2;
    }
    if(c==count)
        result=i;
        c=0;
    }
     printf("%d",result);
}