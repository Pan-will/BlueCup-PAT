/*
	�׳˼������鷨 .
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i,j,r=0;
	int a[3000];
	memset(a,0,sizeof(a));//�����鸳��ֵ0 
	a[0]=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){//����
		for(j=0;j<3000;j++){
			int s = a[j]*i+r;
			r = s/10;
			a[j] = s%10;
		}
	}
	for(i=3000-1;i>=0;i--){
		if(a[i])//a[i]��Ϊ0ʱ������ѭ�� 
			break;
	}
	for(j=i;j>=0;j--)
		printf("%d",a[j]);
	return 0;
}

