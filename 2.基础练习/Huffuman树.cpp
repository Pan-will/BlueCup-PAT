#include<stdio.h>
int main(){
	int n;
	int all=0,flag=0;//all����С�����ĺ�,flag���±� 
	scanf("%d",&n);
	getchar();//���ղ�����˴��Ŀո� 
	int a[n];//�������� 
	for(int i=0;i<n;i++){//¼������ 
		scanf("%d",&a[i]);
	}
	for(int p=0;p<n-1;p++){//����ѭ������ 
		for(int i=0;i<n-1;i++){//ѡ���������� 
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					int t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
			}
		}
		all+=a[flag]+a[flag+1];//allΪ��С��λ֮�� 
		a[flag+1]+=a[flag];//�ڶ�Сλ���ϴ����С����֮�� 
		a[flag]=0;//��Сλ��0
		flag++;
	}
	printf("%d",all);
	return 0;
}
