#include<stdio.h>
int He(int n){//求n的各个位数的和 
	if(n<10) return n;//递归出口 
	else return n%10 + He(n/10);//递归调用 
} 
int main(){
	int n,sum;
	int a[10000];//a用来放0~n的所有生成元
	scanf("%d",&n);
	for(int i=0;i<n;i++){//遍历,算生成元,用a放 
		a[i]=i+He(i);
	}
	int b[5000];//b用来放寂寞的数
	for(int i=0;i<n;i++){//遍历0~n 
		for(int j=0;j<n;j++){//遍历数组a 
			if(i==a[j]){//0~n中存在与生成元相等的数则非寂寞的数,数组b中的相应位置赋值为1 
				b[i]=1;
			}
		}
	}
	for(int i=0;i<n;i++){//遍历b，格式输出所有不为1的元素 
		if(b[i]!=1){
			printf("%d\n",i);
		}
	}
}
