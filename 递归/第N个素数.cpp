/*���ҳ���N������*/
/*ɸ����
	��һ�ν���2�����б�����ɸѡ��
	�ڶ��ν�3������������
	�����ν�4������������
*/
#include<stdio.h>
int main(){
	int N = 1000 * 1000 * 10;
	int x = 100001;
	
	long a[N];
	for(int i=2;i<N/2;i++){
		if(a[i] == 1)
			continue;
		for(int k=2;k<=N/i;k++){
			if(i*k<N)
				a[i*k]=1;
		}
	}
	
	int m=0;
	for(int i=2;i<N;i++){
		if(a[i] == 0){
			m++;
			if(m==x)
				printf("%d\n",i);
		}
	}
}
