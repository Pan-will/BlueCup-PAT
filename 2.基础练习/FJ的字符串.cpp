#include<stdio.h>
void FJ(int n){  
    if(n==1){//�ݹ���� 
        printf("A");  
        return;  
    }  
    else {  
        FJ(n-1);
        printf("%c",'A'+n-1);
        FJ(n-1);  
    }  
}  
int main(){  
    int n; 
	scanf("%d",&n);
    FJ(n);  
}    

