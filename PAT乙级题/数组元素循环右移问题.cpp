#include<stdio.h>
/*
 * ˼·: 
 * 1.mΪ����Ԫ�ظ���, nΪ���Ƶ�λ�ø���; 
 * 2.��Ϊ���n>m��ô����n��Ч��������n%m��Ч����һ����; 
 * 3.����ѭ��y��,y=n%m; 
 * 4.��ĿҪ����Ԫ��ѭ������,ֻҪ��m-y��ʼ���������λ��ĩ; 
 * 5.Ȼ���λ��0��ʼ�����λ��m-y; 
*/
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[m];
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	int y = n%m;//ѭ������ 
	for(int i=m-y;i<m;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<m-y;i++){
		if(i == m-y-1) printf("%d",arr[i]);
		else printf("%d ",arr[i]);
	}
	return 0;
}
