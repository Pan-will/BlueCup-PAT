/*
	��ȫ��:������С��Լ���ĺ͵������� 
*/
#include<stdio.h>
int main(){
	int m,i,k;
	for(i=1;i<10000;i++){
		int sum=0;//ÿ��ѭ�������¼���sum 
		for(k=1;k<i;k++) {
			if(i%k==0)
				sum+=k;
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
}
