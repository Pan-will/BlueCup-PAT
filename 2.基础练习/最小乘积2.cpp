/*��С�˻�(������) ��
	˼·������ֻ�����еĶ�ά���飬һ�������ţ�һ�н����ţ�
	����Ӧ�±�����������ӣ�����������ɡ�*/ 
#include<stdio.h>
int main(){
	int T,N;
	int sum=0;
	scanf("%d",&T);//ѭ�����뼸��������� 
	int result[T];
	for(int k=0;k<T;k++){
		printf("������һ����N��");
		scanf("%d",&N);
		int a[N],b[N];
		//��������a[i] 
		printf("\n\n������a[i]:%d����,�ÿո����:",N);
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
		//��������b[i] 
		printf("\n\n������b[i]:%d����,�ÿո����:",N);
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
		/*��a��b��Ӧ�±���˵ĺ���ΪԪ�ظ���result����*/
		result[k] = 0;
		for(int i=0;i<N;i++){
			result[k] += a[i]*b[i];
		}
	}
	for(int k=0;k<T;k++){
		printf("%d\n",result[k]);
	}
} 

	


