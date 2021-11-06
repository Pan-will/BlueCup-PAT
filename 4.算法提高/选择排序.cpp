#include<stdio.h> 
int main(){
	int N;//元素个数 
	int i,j;//下标 
	scanf("%d",&N);
	getchar();//处理回车 
	int a[N];
	for(int p=0; p<N; p++){//输入数组 
		scanf("%d",&a[p]);
	}
	//选择排序升序 
	for(i=0;i<N-1;i++) {
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		for(int p=0;p<N;p++) {
			printf("%d ",a[p]);
		}
		printf("\n");
	}
	for(int p=0;p<N;p++) {
		printf("%d ",a[p]);
	}
	return 0;
}
