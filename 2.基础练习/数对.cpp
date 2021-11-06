#include<stdio.h>
void ShowYinZi(int n)  
{  
    int sum = 0,i,j;  
    for(i = 1; i <= n; i++)  
    {  
        if(n % i == 0)  
        {  
            printf("%d * %d = %d\n",i,n/i,n);    
        }  
    }  
} 
int main(){
	int N;
	scanf("%d",&N);
	ShowYinZi(N);
	return 0;
}
