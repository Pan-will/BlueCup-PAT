#include<stdio.h>
#include<memory.h>
int sum=0;//���ж����ַŷ������ 
int gong[12][12]={0}; //�����ά�������n*n���� 
int lie[12];//����һ��n�� 
int xie1[2*12];//����ӨI���K�Խ���
int xie2[2*12];//����ӨK���I�Խ���

void HuangHou(int k,int n,int x,int y){//n��ʾ���̹�ģ��ѭ������ 
	int hang;//���ƻʺ��λ��
	/*�ӵ�һ�п�ʼȷ���ʺ��λ��,������hang��ʾ�ʺ��ڸ��еĵڼ���λ����*/
	for(hang=0;hang<n;hang++) {
		//�жϸ�λ�������Խ��߶������ԷŻʺ�ʱִ��if������ʼֵδ��Ϊ��(��1) 
		gong[x][y]=0;
		gong[x-1][y-1]=0;
		gong[x-1][y]=0;
		gong[x-1][y+1]=0;
		gong[x][y-1]=0;
		gong[x][y+1]=0;
		gong[x+1][y-1]=0;
		gong[x+1][y]=0;
		gong[x+1][y+1]=0;
		if(lie[hang] && xie1[k+hang] && xie2[k-hang+n-1]){
			gong[k][hang]=1;//���ϻʺ���ֵΪ1 
			
			lie[hang]=0;//���ж������ٷŻʺ�,��ֵΪ0
			xie1[k+hang]=0;//��λ�����Խ����ϲ����ٷŻʺ���ֵΪ0
			xie2[k-hang+n-1]=0;//��λ�ø��Խ����ϲ����ٷŻʺ���ֵΪ0
			if(k==n-1) {//�Ƿ�ִ�е���n-1�У�������+1������ִ��else 
				sum++;
			}else {//��̽�߲�ͨ����� 
				HuangHou(k+1,n,x,y);//�ݹ���ã��������� 
			}
			gong[k][hang]=0;//�õ��ʺ���ֵΪ0 
			xie1[k+hang]=1;//���Խ����ϻָ���ʼֵ 
			xie2[k-hang+n-1]=1;//���Խ����ϻָ���ʼֵ 
			lie[hang]=1;//���лָ���ʼֵ
		}
	}
}
int main(){
	memset(lie,1,sizeof(lie));//�����鸳��ֵ
	memset(xie1,1,sizeof(xie1));
	memset(xie2,1,sizeof(xie2));
	int n,x,y;//�������̹�ģ������λ������ 
	scanf("%d%d%d",&n,&x,&y);
	HuangHou(0,n,x-1,y-1);
	printf("%d",sum);
	return 0;
}            
