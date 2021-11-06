#include<stdio.h>  
main(){  
    double ben,time,lv,sum=0;  
    scanf("%lf%lf%lf",&ben,&time,&lv);  
    for(int i=1;i<=time;i++){  
        sum=sum+ben;  
        sum=sum*(1+lv);  
    }  
    printf("%.2lf",sum-time*ben);  
} 
