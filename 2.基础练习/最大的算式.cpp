#include<stdio.h> 
main(){
	long long N,K,sum=0,JI=1,result=1;
	scanf("%lld%lld",&N,&K);
	long long a[N];
	for(long long i=0;i<N;i++){
		scanf("%lld",&a[i]);
	}
	/*ð�ݽ���*/
	for(long long i=0; i<N-1; i++){
		for(long long j=0; j<N-1-i; j++){
			if(a[j]<a[j+1]){
				long long t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	/*�������������*/
	for(long long i=0;i<N;i++){
		printf("%lld ",a[i]);
	}

	/*ǰK�����ĳ˻�*/
	for(long long i=0; i<K; i++){
		JI *= a[i];
	}
	printf("\nǰ%lld�ĳ˻�Ϊ��%lld\n",K,JI);
	
	/*��N-K�����ĺ�*/
	for(long long j=K;j<N;j++){
		sum += a[j];
	}
	printf("��%lld�ĺ�Ϊ��%lld\n",N-K,sum);
	
	result=sum*JI;
//	printf("���Ľ��Ϊ��%d",result);
	printf("%lld",result);
}


