#include<stdio.h>
int n;
int a[200];
void dfs(int begin){
	if(begin+1>n){//���� 
		return;
	}else{
		int min=begin;//����һ����Сֵ�����Сֵ��С��
		for(int i=begin+1;i<n;i++){//ǰ���ź��ˣ��ں���û�ŵ����� 
			if(a[min]>a[i])//���������� 
				min = i;//����Сֵ��С�긳��min
		}
		printf("swap(a[%d], a[%d]):",begin,min);//������:min<begin
		int t = a[min];//����ֵ�� 
		a[min] = a[begin];
		a[begin] = t;
		for(int i=0;i<n;i++){//����� 
			printf("%d ",a[i]);
		}
		printf("\n");
		dfs(begin+1);//����һ���� 
	}
}
int main(){
	scanf("%d",&n);
	getchar();//����س� 
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	dfs(0);//�ӵ�0��λ�ÿ�ʼ 
	return 0;
}
