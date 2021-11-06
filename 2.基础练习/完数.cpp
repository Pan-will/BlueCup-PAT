#include<stdio.h> 
int FindYinZi(int n)  
{  
    int sum = 0, i;  
    for(i = 2; i <= n / 2; i++)  
    {  
        if(n % i == 0)  
        {  
            sum += i;   
        }  
    }  
    return sum + 1;  
} 
int main(){
	int N;
	int sum=0;
	scanf("%d",&N);
	if(N==1)  
    {  
        printf("no");  
        return 0;  
    }  
    sum = FindYinZi(N);  
    if(sum == N)  
        printf("yes");  
    else  
        printf("no");  
    return 0; 
} 
