#include<stdio.h>
int main(){
	//n表念头数量,sum用来统计,max用来记录最长因果链中念头数量 
    int n,sum=0,max=0;
    //index用来记录数组下标 
	int from[1000],index;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    	scanf("%d",&from[i]);
    for(int i=1;i<=n;i++){
        index=i;//记录下标，遍历到哪一个念头了 
        sum=1;//因果链念头数量为1 
        while(from[index]<index && from[index]!=0){//保证a[i]<i且a[i]!=0
            sum++;//因果链中念头数量+1 
            index=from[index];//将a[i]赋给i 
        }
        if(max<sum)//用max来记录最大的念头数量 
           max=sum;
	}
    printf("%d",max);
    return 0;
}
