#include<stdio.h>
int main(){
	int a[20];
	int k=0;//�����±� 
	int x;
	while(~scanf("%d",&x)){
		if(x==0)
			break;
		else
			a[k++]=x;
	}
	/*ð�ݽ���*/
	for(int i=0; i<k-1; i++){
		for(int j=0; j<k-1-i; j++){
			if(a[j]<a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	printf("%d",a[1]);
}
