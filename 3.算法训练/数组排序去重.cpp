#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	/*ð������*/
	for(int i=0; i<10-1; i++){
		for(int j=0; j<10-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	int index=1;//�±� 
	int b[10];//��Ų��ظ�Ԫ�ص�����
	b[0] = a[0];
	for(int i=1;i<10;i++){
		if(a[i] != a[i-1]){//�����ǰ������Ԫ�غ�ǰһ��Ԫ�ز����
			b[index++] = a[i];//�浽b�� 
		}
	}
	for(int i=0;i<index;i++){
		printf("%d ",b[i]);
	}
}
