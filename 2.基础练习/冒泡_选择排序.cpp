#include<stdio.h> 
int main(){
	printf("请输入一个数N：");
	int N;
	scanf("%d",&N);
	int a[N];
	//输入数组 
	printf("请输入%d个数,用空格隔开:",N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	printf("\n原序为：");
	//输出数组 
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}
	printf("\n\n");
	//选择排序升序 
	for(int k=0;k<N-1;k++) {
		for(int j=k+1;j<N;j++){
			if(a[k]>a[j]){
				int t = a[k];
				a[k] = a[j];
				a[j] = t;
			}
		}
	}
	printf("选择排序升序为：");
	//输出数组 
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}
	printf("\n\n");
	//选择排序降序 
	for(int k=0;k<N-1;k++) {
		for(int j=k+1;j<N;j++){
			if(a[k]<a[j]){
				int t = a[k];
				a[k] = a[j];
				a[j] = t;
			}
		}
	}
	printf("选择排序降序为：");
	//输出数组 
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}
	printf("\n\n");
	
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(a[j]<a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			} 
		}
	}
	printf("\n冒泡排序降序为：");
	for(int i=0; i<N; i++){
		printf("%5d", a[i]);
	}
	printf("\n");
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	printf("\n冒泡排序升序为：");
	for(int i=0; i<N; i++){
		printf("%5d", a[i]);
	}
	printf("\n\n");
}
