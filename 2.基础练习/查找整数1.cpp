#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d",&m);
	int a[m];
	for(j=0; j<m; j++){
		scanf("%d", &a[j]);
	}
	scanf("%d",&n);
	for(i=0; i<=m; i++){
		if(a[i]==n){
			break;
		}
	}
	/*���ѭ�����i�ĳ��ȴ���m��
	�����鳤�ȣ�˵����������û���ҵ���ȵ��� */
	if(i>m){
		printf("-1");
	}else{
		printf("%d",i+1);
	} 
} 

