#include<stdio.h>  
  
int resolve(int a,int max){
    if(a == 1 || max == 1)  
        return 1;  
    if(a == max)  
        return resolve(a,max-1)+1;  
    if(a > max)  
        return resolve(a,max-1)+resolve(a-max,max);  
    if(a < max)  
        return resolve(a,a);  
    else return 0;  
}  
  
int main(){  
    int n;  
    int sum;  
    scanf("%d",&n);  
    sum = resolve(n,n);  
    printf("%d",sum);
    return 0;
}  
