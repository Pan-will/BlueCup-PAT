#include<stdio.h>
#include<string.h>
#include<math.h>
//��������ֱ�߾��� 
int juli(int x1,int x2,int y1,int y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main(){
	int n,m,k;//n:������m:��ѡ����k:��ѡ�� 
	scanf("%d%d%d",&n,&m,&k);
	getchar();//������˴��Ļ��� 
	int way[m];//��ÿ����ѡ�ʾֵ�ÿһ���ľ���,����������С��k�� 
	int x[m+n],y[m+n];//������ 
	int flag=0;//��� 
	for(int i=0;i<m+n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	for(int i=n;i<m+n;i++){//��ѡ�ʾ��� 
		for(int j=0;j<n;j++){//���� 
			way[flag++]=juli(x[i],x[j],y[i],y[j]);//ÿ�������ʾֵľ���֮�� 
		}
	}
	//ð������
//	for(int i=0;i<m-1;i++) {
//		for(int j=0;j<m-1-i;j++){
//			if(way[j]>way[j+1]){
//				int temp = way[j];
//				way[j] = way[j+1];
//				way[j+1] = temp;
//			}
//		}
//	}
	int p=2;
	while(p--) {
		int min=way[0],index=0;
		for(int i=1;i<=m;i++){
			if(way[i]<=min && way[i]!=-1){
				min = way[i];
				index=i;
				way[i]=-1;
			}
		}
		printf("%d ",index);
	}
//	printf("\n�����way����:");
//	for(int i=0;i<m;i++){
//		printf("%d ",way[i]);
//	}
//	printf("\n�����������Ϊ��%d %d",way[0],way[1]);
	return 0;
}
