#include<stdio.h>
int sum=0;//���ж����ַŷ������ 
int lie[8];//����һ��n�� 
int xie1[2*8];//����ӨI���K�Խ���
int xie2[2*8];//����ӨK���I�Խ���

void HuangHou(int begin){
	if(begin>8){//��ʾ�������˵ڰ���,˵���˴�Ϊ��Ч���� 
		sum++;
	}else{
		for(int i=1;i<=8;i++){//��ÿ���������Ǵӵ�һ�п�ʼ�� 
			if(lie[i]==0 && xie1[begin+i-1]==0 && xie2[begin-i+8]==0){
				lie[i]=1;
				xie1[begin+i-1]=1;
				xie2[begin-i+8]=1;
				HuangHou(begin+1);//������һ�� 
				lie[i]=0;
				xie1[begin+i-1]=0;
				xie2[begin-i+8]=0;
			}
		}
	} 
}
int main(){
	HuangHou(1);//�ӵ�һ�п�ʼ���� 
	printf("%d",sum);
	return 0;
}            

