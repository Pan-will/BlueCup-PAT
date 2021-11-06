#include<stdio.h>  
#include<string.h>  
int n,sum=0;  
bool use[10];//用来标记数字i是否被用了，即是否已被放在了排列中  
int a[10];
void dfs(int begin){  
    if(begin==10){  //表示当前数组a中已有10个数字  
        sum++;  
        if(sum==n){
            for(int i=0; i<10; i++)
                printf("%d",a[i]);
        }
    }
    for(int i=0; i<=9; i++){//枚举数字0到数字9
        if(!use[i]){
            use[i]=true;
			a[begin]=i;//数组第一个元素为0 
            dfs(begin+1);
            use[i]=false;  
        }
    }  
}  
int main(){
	memset(use,false,sizeof(use));
    scanf("%d",&n);
    if(n==0){
    	return 0;
	}
    dfs(0);  
    return 0;  
}  
