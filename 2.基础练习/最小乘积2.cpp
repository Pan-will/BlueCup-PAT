/*最小乘积(基本型) ：
	思路：输入只有两行的二维数组，一行升序排，一行降序排，
	将对应下标的数相乘再相加，将和输出即可。*/ 
#include<stdio.h>
int main(){
	int T,N;
	int sum=0;
	scanf("%d",&T);//循环输入几组测试数据 
	int result[T];
	for(int k=0;k<T;k++){
		printf("请输入一个数N：");
		scanf("%d",&N);
		int a[N],b[N];
		//输入数组a[i] 
		printf("\n\n请输入a[i]:%d个数,用空格隔开:",N);
		for(int i=0; i<N; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<N-1; i++){
			for(int j=0; j<N-1-i; j++){
				if(a[j]<a[j+1]){
					int t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				} 
			}
		}
		//输入数组b[i] 
		printf("\n\n请输入b[i]:%d个数,用空格隔开:",N);
		for(int i=0; i<N; i++){
			scanf("%d",&b[i]);
		}
		for(int i=0; i<N-1; i++){
			for(int j=0; j<N-1-i; j++){
				if(b[j]>b[j+1]){
					int t = b[j];
					b[j] = b[j+1];
					b[j+1] = t;
				} 
			}
		}
		/*将a、b对应下标相乘的和作为元素赋给result数组*/
		result[k] = 0;
		for(int i=0;i<N;i++){
			result[k] += a[i]*b[i];
		}
	}
	for(int k=0;k<T;k++){
		printf("%d\n",result[k]);
	}
} 

	


