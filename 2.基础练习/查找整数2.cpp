#include<stdio.h>
int main(){
	int m=0,n=0,i,j;
	scanf("%d",&m);
	int a[1000]={0};//���鶨��ıȸ����Դ�һ��,���øոպ�
	for(i=0; i<m; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d",&n);
	for(j=0; j<m; j++){
		/*�ҵ���ȵ����������Ӧ��ӡ��ִֹͣ�г��� */ 
		if(a[j]==n){
			printf("%d",j+1);
			return 0;
		}
	}
	/*ѭ����������ζ���ⲻ����ȵ���������Ӧ�Ĵ�ӡ�ͺ�*/ 
	printf("-1");
	return 0;
}