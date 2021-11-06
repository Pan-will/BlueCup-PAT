#include<stdio.h>
int main(){
    int n,t,flag,j,x=0;
	int all=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int t=0;t<n-1;t++){//控制循环次数
        for(int i=1;i<n;i++){//给数组从小到大排序 （插入法） 
            flag=a[i];
            for(j=i;flag<a[j-1];j--){
                a[j]=a[j-1];
            }
            a[j]=flag;
        }
        all+=a[x]+a[x+1];//s为最小两位之和 
        a[x+1]+=a[x];//第二小的位置上存放最小两数之和 
        a[x]=0;// 最小一位清零 
        x++;
    }
    printf("%d",all);
    return 0;
}
