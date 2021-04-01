
#include <stdio.h>
void fact(int n)
{
  int a[2000],temp,c,i;
  a[0]=1;
  c=0;
  for(;n>=2;n--)
  {
      temp=0;
      for(i=0;i<=c;i++)
      {
      temp += (a[i]*n);
      a[i] = temp%10;
      temp = temp/10;
      }
      while(temp>0)
      {
          a[++c]=temp%10;
          temp/=10;
      }
  }

  if(c>=3)
  {
      for(i=3;i>=0;i--)
        printf("%d",a[i]);
  }
  else
    for(i=c;i>=0;i--)
        printf("%d",a[i]);

}


int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
}