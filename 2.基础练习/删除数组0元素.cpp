#include<stdio.h>
void DelLing(int a[],int N){
	int j=0;
	for(int i=0;i<N;i++){
		if(a[i]!=0){
			a[j]=a[i];
			j++;
		}
	}
	for(int i=0;i<j;i++){
		printf("%d ",a[i]);
	}
	printf("\nʣ�³���Ϊ��%d",j);
}
int main(){
	int N;
	scanf("%d",&N);
	int a[N];//���峤��ΪN��һά���� 
	//�������� 
	for(int i=0; i<N; i++){//¼������a 
		scanf("%d",&a[i]);
	}
	DelLing(a,N);
}
