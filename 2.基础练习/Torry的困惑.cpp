#include<stdio.h> 
#include<math.h>
int main(){
	int n,i,j;
	int count=0,sum=1;
	scanf("%d",&n);
	/*
	���Ƚ��п�ƽ����֤ʱ��;
	������������һ���������������Ǻͱ��Լ�С����ģ;
	��������һ���жϣ�������Գ�������ô���������� 
	*/
	for(i=2;i<=sqrt(100000);i++){
		for(j=2;j<i;j++){
			if(i%j == 0) break;
			else if(j>=i){
				count++;
				sum *= i;
				if(count==n) break;
			}
		}
	}
	printf("%d",sum%50000);
	return 0;
}
