/*
	��������������һ������a[N]���жϲ����ÿһ������Ԫ�ط�Χ�ڵ����������� 
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",a[i]);
	}
	printf("��������е�Ԫ��Ϊ��");
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("0��ÿ��Ԫ�ط�Χ�ڵ�����Ϊ��");
	for(int i=0;i<N;i++){
		int m,k,h;
		for(m=2;m<=a[i];m++){
			k=sqrt(m+1);//ֻ������ȷ��ѭ�������� 
			for(int j=2;j<=k;j++)//�ж�������������2��ʼ�� 
				if(m%j != 0){
					printf("%d ",m);
					break;
				}
		}
	}
	
}
