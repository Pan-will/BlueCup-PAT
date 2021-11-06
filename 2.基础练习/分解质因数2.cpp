#include<stdio.h>  
int main()  
{  
    int a,b,i,d,c,j;  
    scanf("%d%d",&a,&b);  
    if(a<=b && a>=2) //符合条件才执行 
    {  
        for(i=a;i<=b;i++)
        {  
            d=1;  
            for(j=2;j<i;j++)  
            if(i%j==0)  //若非质数让d为0 
            {   
                d=0;  
                break;  
            }  
            if(d==1)  //若为质数 
            	printf("%d=%d\n",i,i);
            else if(d==0)  
            {  
                printf("%d=",i);  
                j=2;  
                c=i;  
                while(1){  
                    while(c%j==0){  
                        printf("%d",j);  
                        c=c/j;  
                        if(c!=1)  
                        	printf("*");  
                    }  
                    if(c==1){  
                        printf("\n");  
                        break;  
                    }  
                    j++;  
                }  
            }  
        }  
    }  
    return 0;  
} 
