#include <stdio.h>

int main()
{
    int n,m,i,j,temp;
    scanf("%d%d",&n,&m);
    int arr1[n],arr2[m],arr3[n+m];
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++){
        arr3[i] = arr1[i];
    }
    for(i=0;i<m;i++){
        arr3[i+n] = arr2[i];
    }
    for(i=0;i<n+m-1;i++){
        for(j=i+1;j<n+m;j++){
           if(arr3[i]>arr3[j]){
               temp = arr3[i];
               arr3[i] = arr3[j];
               arr3[j] = temp;
           } 
        }
    }
    for(i=0;i<n+m-1;i++){
        if(arr3[i] < arr3[i+1]){
            printf("%d ",arr3[i]);
        }
    }
    printf("%d",arr3[n+m-1]);
    return 0;
}