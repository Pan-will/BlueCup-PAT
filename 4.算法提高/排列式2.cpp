#include<stdio.h>  
#include<string.h> 
int sum=0;  
bool use[10];
int a[10];
void dfs(int begin){  
    if(begin==9){  //表示当前数组a中已有9个数字  
        int num1=a[0]*1000+a[1]*100+a[2]*10+a[3];
        int num2=a[4]*10+a[5];
        int num3=a[6]*100+a[7]*10+a[8];
        int num4=a[4];
        int num5=a[5]*1000+a[6]*100+a[7]*10+a[8];
		if(num1==num2*num3){
            printf("%d = %d x %d\n",num1,num2,num3);
        }
		if(num1==num4*num5){  
			printf("%d = %d x %d\n",num1,num4,num5); 
        }
        return;
    }
    for(int i=1; i<=9; i++){//枚举数字1到数字9
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
    dfs(0);//对数组a来讲,表示从第 1个位置开始搜索 
    return 0;
}  
