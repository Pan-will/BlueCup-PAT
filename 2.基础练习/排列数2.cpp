#include<stdio.h>  
#include<string.h>  
long long n,sum;  
int label[10];//用来标记数字i是否被用了，即是否已被放在了排列中  
int a[10];
void SouSuo(int pos){  
    if(pos==10){  //表示当前数组a中已有10个数字  
        sum++;  
        if(sum==n){  
            for(int i=0; i<10; i++)
                printf("%d",a[i]); 
        }
    }
    for(int i=0; i<=9; i++){//枚举数字0到数字9
        if(!label[i]){//若数字i还没被放在当前排列中
            a[pos]=i;//将i赋给当前排列a数组的第pos位置  
            label[i]=1;//数字i已放入排列中，标记为1  
            SouSuo(pos+1);//继续搜索下一个位置  
            label[i]=0;//清除标记  
        }  
    }  
}  
int main(){  
    scanf("%d",&n);
    if(n==0){
    	return 0;
	}
    memset(label,0,sizeof(label));//给标记赋初值0 
    sum=0;  
    SouSuo(0);
    return 0;  
}  
