/*
	��������������һ����N���жϲ���� 0-N��Χ�ڵ����������� 
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d",&N);
	int leap=1;//����һ����ǣ���ֵΪ1 
	int m,k,h;
	for(m=2;m<=N;m++){
		k=sqrt(m+1);//ȷ��ѭ������
		for(int i=2;i<=k;i++)//�ж�������������2��ʼ�� 
			if(m%i == 0){//�����������������Ǹı� 
				leap=0;
				break;
			}
		if(leap==1){ //����ʡ��дΪ��if(leap);�����û�䣬���ӡ���� 
			printf("%d ",m);
			h++;//��¼������� 
			if(h%10 == 0)//һ�����10����
				printf("\n"); 
		}
		leap = 1;//���ñ�� 
	}
}
