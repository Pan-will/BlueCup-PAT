#include<stdio.h>
int main(){
	int i,j;
	int time;//ѭ������ 
	int f[5]={0};//����һ����λ���飬��ʼֵ��0 
	printf("00000\n");
	for(time=1;time<=31;time++){//ѭ��31�� 
		i=0;
		f[i]=f[i]+1;
		while(f[i]>=2){//�������һ�������λ 
			int temp=f[i]/2;
			f[i]=f[i]%2;
			i++;
			f[i]=f[i]+temp;
		}
		for(j=4;j>=0;j--){
			printf("%d",f[j]);
		}
		printf("\n");
	}
}
