#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) a[i]=i+1;//数组赋值 
	int flag=0;//定义计数标记 
	int q=n;//元素总数 
	
	for(i=0;;i++){
		if(i==n) i=0;//遍历到队伍末尾跳转到队首继续遍历 
		if(a[i]!=0) flag++;//元素不为0，标记+1 
		else continue;//元素为0，则进行下一轮判断
		if(flag%3==0){//数到3,退出游戏 
			a[i]=0;//该元素置值为0 
			q--;//总数 -1 
			flag=0;//重新计数 
		}
		if(q==1) {
			break;//只剩下一个元素时跳出循环 
		}
	}
	for(i=0;i<n;i++){//遍历数组，输出不为0的元素即为结果 
		if(a[i]!=0){
			printf("%d",a[i]);
		}
	}
	return 0;//程序结束 
}
