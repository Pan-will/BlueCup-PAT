#include<stdio.h>
int main(){
	int n;
	int all=0,flag=0;//all表最小两数的和,flag表下标 
	scanf("%d",&n);
	getchar();//接收并处理此处的空格 
	int a[n];//定义数组 
	for(int i=0;i<n;i++){//录入数组 
		scanf("%d",&a[i]);
	}
	for(int p=0;p<n-1;p++){//控制循环次数 
		for(int i=0;i<n-1;i++){//选择排序升序 
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
		all+=a[flag]+a[flag+1];//all为最小两位之和 
		a[flag+1]+=a[flag];//第二小位置上存放最小两数之和 
		a[flag]=0;//最小位清0
		flag++;
	}
	printf("%d",all);
	return 0;
}
