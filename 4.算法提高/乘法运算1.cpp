#include<stdio.h> 
int main(){
	int m,n;
	int a[2]={0},b[2]={0};//�ֱ��������m��n��ʮλ�͸�λ 
	scanf("%d%d",&m,&n);
	a[0] = m%10;//m�ĸ�λ 
	a[1] = m/10;//m��ʮλ
	b[0] = n%10;//n�ĸ�λ
	b[1] = n/10;//n��ʮλ
	printf("%4d\n",m);
	printf("X%3d\n",n);
	printf("������\n");
	if(a[1]==0 && b[1]==0){//һλ����һλ��
		printf("%4d",m*b[0]);
	}
	if(a[1]>0 && b[1]==0){//��λ����һλ�� 
		printf("%4d",m*b[0]);
	}
	if(a[1]==0 && b[1]>0){//һλ������λ��
		for(int i=0;i<2;i++){
			if(m*b[i]==0)
				printf("  00\n");
			else if(i==0 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%4d\n",m*b[i]);
			else if(i==1 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%3d\n",m*b[i]);				
			else
				printf("%3d\n",m*b[i]);
		}
		printf("������\n");
		printf("%4d",m*n);
	}
	if(a[1]>0 && b[1]>0){//��λ������λ��
		for(int i=0;i<2;i++){
			if(m*b[i]==0)
				printf("  00\n");
			else if(i==0 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%4d\n",m*b[i]);
			else if(i==1 && m*b[i]!=0 && m*b[i]/10 != 0)
				printf("%3d\n",m*b[i]);
			else
				printf("%3d\n",m*b[i]);
		}
		printf("������\n");
		printf("%4d",m*n);
	}
}
