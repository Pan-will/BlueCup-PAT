#include<stdio.h> 
int main(){
	int N;//Ԫ�ظ��� 
	int i,j;//�±� 
	scanf("%d",&N);
	getchar();//����س� 
	int a[N];
	for(int p=0; p<N; p++){//�������� 
		scanf("%d",&a[p]);
	}
	//ѡ���������� 
	for(i=0;i<N-1;i++) {
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		for(int p=0;p<N;p++) {
			printf("%d ",a[p]);
		}
		printf("\n");
	}
	for(int p=0;p<N;p++) {
		printf("%d ",a[p]);
	}
	return 0;
}
