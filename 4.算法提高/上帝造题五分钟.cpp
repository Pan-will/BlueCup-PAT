#include<stdio.h> 
int main(){
	int m,Q;
	int a[2000];
	scanf("%d%d",&m,&Q);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	int rel[Q];//���������� 
	int flag=0,q=Q;//������ 
	while(Q--){
		int low,high;//�������±߽�
		scanf("%d%d",&low,&high);
		int min=a[low];
		for(int i=low; i<=high; i++){
			if(a[i]<min){
				min=a[i];
			}
		}
		rel[flag++]=min;
	}
	for(int i=0;i<q;i++){
		printf("%d\n",rel[i]);
	}
}
