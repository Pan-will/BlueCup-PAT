/*递归学习2:打印数组元素累加和.
	本题使用递归的关键在：
	怎样在递归中实现变量的变化。

方案一：踢皮球； 
*/
#include<stdio.h> 
#include<string.h>

int main(){
	int N,sum=0;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("%d",sum) ;
}
