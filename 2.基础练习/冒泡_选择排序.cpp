#include<stdio.h> 
int main(){
	printf("������һ����N��");
	int N;
	scanf("%d",&N);
	int a[N];
	//�������� 
	printf("������%d����,�ÿո����:",N);
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	printf("\nԭ��Ϊ��");
	//������� 
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}
	printf("\n\n");
	//ѡ���������� 
	for(int k=0;k<N-1;k++) {
		for(int j=k+1;j<N;j++){
			if(a[k]>a[j]){
				int t = a[k];
				a[k] = a[j];
				a[j] = t;
			}
		}
	}
	printf("ѡ����������Ϊ��");
	//������� 
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}
	printf("\n\n");
	//ѡ�������� 
	for(int k=0;k<N-1;k++) {
		for(int j=k+1;j<N;j++){
			if(a[k]<a[j]){
				int t = a[k];
				a[k] = a[j];
				a[j] = t;
			}
		}
	}
	printf("ѡ��������Ϊ��");
	//������� 
	for(int i=0;i<N;i++){
		printf("%5d",a[i]);
	}
	printf("\n\n");
	
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(a[j]<a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			} 
		}
	}
	printf("\nð��������Ϊ��");
	for(int i=0; i<N; i++){
		printf("%5d", a[i]);
	}
	printf("\n");
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	printf("\nð����������Ϊ��");
	for(int i=0; i<N; i++){
		printf("%5d", a[i]);
	}
	printf("\n\n");
}
