#include <stdio.h>

int main()
{
    int H,M;
    float angle1,angle2,H_angle,M_angle;
    scanf("%d %d",&H,&M);
        if (H == 12) 
            H = 0; 
        if (M == 60)  
            M = 0; 
        H_angle = (0.5 * (H*60 + M)); 
        M_angle = (6*M);   
        if(H_angle>M_angle){
            angle1 = (H_angle - M_angle); 
            angle2 = 360-angle1;
        }else{
            angle1 = (M_angle - H_angle); 
            angle2 = 360-angle1;
        }
        if(angle1<angle2){
            printf("%f",angle1);
        }else{
            printf("%f",angle2);
        }
    return 0;
}