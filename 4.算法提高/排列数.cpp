#include<stdio.h>  
#include<string.h>  
int n,sum=0;  
bool use[10];//�����������i�Ƿ����ˣ����Ƿ��ѱ�������������  
int a[10];
void dfs(int begin){  
    if(begin==10){  //��ʾ��ǰ����a������10������  
        sum++;  
        if(sum==n){
            for(int i=0; i<10; i++)
                printf("%d",a[i]);
        }
    }
    for(int i=0; i<=9; i++){//ö������0������9
        if(!use[i]){
            use[i]=true;
			a[begin]=i;//�����һ��Ԫ��Ϊ0 
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
