#include<stdio.h>
int He(int n){//��n�ĸ���λ���ĺ� 
	if(n<10) return n;//�ݹ���� 
	else return n%10 + He(n/10);//�ݹ���� 
} 
int main(){
	int n,sum;
	int a[10000];//a������0~n����������Ԫ
	scanf("%d",&n);
	for(int i=0;i<n;i++){//����,������Ԫ,��a�� 
		a[i]=i+He(i);
	}
	int b[5000];//b�����ż�į����
	for(int i=0;i<n;i++){//����0~n 
		for(int j=0;j<n;j++){//��������a 
			if(i==a[j]){//0~n�д���������Ԫ��ȵ�����Ǽ�į����,����b�е���Ӧλ�ø�ֵΪ1 
				b[i]=1;
			}
		}
	}
	for(int i=0;i<n;i++){//����b����ʽ������в�Ϊ1��Ԫ�� 
		if(b[i]!=1){
			printf("%d\n",i);
		}
	}
}
