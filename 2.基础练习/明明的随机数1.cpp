#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define FLAG -1/*特殊标记，用最小的负数表示*/
main(){
	int N,k,number;
	scanf("%d",&N);
	int a[N];
	srand((unsigned) time(NULL));
	for(k=0;k<N;k++){
		number=rand()%1001;//产生1-1000之间的随机数
		a[k]=number;
	}
	/*冒泡升序*/
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	/*输出*/
	for(int s=0; s<N; s++){
		printf("%d ", a[s]);
	}
}
