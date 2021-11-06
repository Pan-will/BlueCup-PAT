#include<stdio.h> 
main(){
	long long N,K,sum=0,JI=1,result=1;
	scanf("%lld%lld",&N,&K);
	long long a[N];
	for(long long i=0;i<N;i++){
		scanf("%lld",&a[i]);
	}
	/*冒泡降序*/
	for(long long i=0; i<N-1; i++){
		for(long long j=0; j<N-1-i; j++){
			if(a[j]<a[j+1]){
				long long t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	/*输出排序后的序列*/
	for(long long i=0;i<N;i++){
		printf("%lld ",a[i]);
	}

	/*前K个数的乘积*/
	for(long long i=0; i<K; i++){
		JI *= a[i];
	}
	printf("\n前%lld的乘积为：%lld\n",K,JI);
	
	/*后N-K个数的和*/
	for(long long j=K;j<N;j++){
		sum += a[j];
	}
	printf("后%lld的和为：%lld\n",N-K,sum);
	
	result=sum*JI;
//	printf("最大的结果为：%d",result);
	printf("%lld",result);
}


