/*��С�˻�(������) ��
	˼·������ֻ�����еĶ�ά���飬һ�������ţ�һ�н����ţ�
	����Ӧ�±�����������ӣ�����������ɡ�*/ 
#include<stdio.h>
int main(){
	int N;
	int sum=0;
	printf("������һ����N��");
	scanf("%d",&N);
	int a[N],b[N];
	
	//��������a[i] 
	printf("������%d����,�ÿո����:",N);
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
	printf("\n\n������%d����,�ÿո����:",N);
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
	
	/*���a��b��Ӧ�±���˵ĺ�*/
	for(int i=0;i<N;i++){
		sum += a[i]*b[i];
	}
	printf("\n\na��b��Ӧ�±���˵ĺ�Ϊ��%d",sum);
	
} 

	


