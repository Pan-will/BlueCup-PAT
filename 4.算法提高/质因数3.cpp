#include<stdio.h>
#define MAX 32768+10
int table[MAX];
int visit[MAX];
/*筛法取得素数表*/
void primeTable(){
    int count = 0;
    for( int i=2; i<=MAX; i++){
        if(visit[i])//元素不为0,重新循环 
			continue;
        table[count++] = i;
        for(int j=i*2; j<=MAX; j=j+i){
            visit[j]=1;
        }
    }
}
int main(){
    primeTable();//得到素数表 
    int n;
    int index=0;  
    int count = 0;  
    scanf("%d",&n);  
    while(n > 1){
        if((n%table[index]) == 0) {  
            printf("%d ", table[index]); 
            count++;  
            n = n / table[index];  
        }else{  
            index++;  
        }  
    }  
  	printf("\n%d",count);
    return 0;  
}
