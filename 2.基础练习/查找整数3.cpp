#include <stdio.h>  
int main(){  
    int n = 0, a = 0, i = 0;  
    int num[1000] = {0};  
  
    scanf("%d",&n);  
    for (i = 0; i < n; ++i){  
        scanf("%d",&num[i]);  
    }  
    scanf("%d",&a);  
    for (i = 0; i < n; ++i)  
    {  
        if (num[i] == a){
            printf("%d",i+1); 
            return 0;  
        }  
    }  
    printf("-1");  
    return 0;  
}  
