#include<stdio.h>
int n;
int a[200];
void dfs(int begin){
	if(begin+1>n){//出口 
		return;
	}else{
		int min=begin;//定义一个最小值存放最小值的小标
		for(int i=begin+1;i<n;i++){//前面排好了，在后面没排的中找 
			if(a[min]>a[i])//决定升序降序 
				min = i;//将更小值的小标赋给min
		}
		printf("swap(a[%d], a[%d]):",begin,min);//按题意:min<begin
		int t = a[min];//交换值呗 
		a[min] = a[begin];
		a[begin] = t;
		for(int i=0;i<n;i++){//输出呗 
			printf("%d ",a[i]);
		}
		printf("\n");
		dfs(begin+1);//找下一个呗 
	}
}
int main(){
	scanf("%d",&n);
	getchar();//处理回车 
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	dfs(0);//从第0个位置开始 
	return 0;
}
