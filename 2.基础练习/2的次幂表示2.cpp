#include<stdio.h>
void cimi(int n){
    int num=0;
    int i=0,j,k;
    int a[32];//数组
    
    
    /*主要的*/ 
    while(n){//若n不是0 ,逐步将n简化,放到数组a中 
        j=n%2;//n余2运算 
        if(j==1)
            a[num++]=i;//存储第几次是1
        i++;
        n/=2;
    }
    
    
    for(i=num-1;i>=0;i--){//逆序遍历数组a
        if(a[i]==0)
            printf("2(0)");
        else if(a[i]==1)
            printf("2");
        else if(a[i]==2)
            printf("2(2)");
        else if(a[i]>2){
            printf("2(");
            cimi(a[i]);//递归调用 
            printf(")");
        }
        if(i!=0)
            printf("+");
    }
} 
int main(){
    int n;
    scanf("%d",&n);//输入n
    cimi(n);//调用函数 
    return 0;//结束程序 
}


