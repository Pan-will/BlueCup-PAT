/*
�������ݣ� 
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
*/
#include<stdio.h>
int max=0,sum;//max��Ԥ��һ�����ֵ,sum�����Żʺ��λ�õ�Ԫ�غ�
int lie[9];//����һ��n��
int xie1[2*8];//����ӨI���K�Խ���
int xie2[2*8];//����ӨK���I�Խ���
int qipan[9][9];//����Ȩֵ
int ans=0;
void HuangHou(int begin,int sum){
	if(begin>8){//��ʾ�������˵ڰ���,˵���˴�Ϊ��Ч���� 
		if(sum>max){
			max = sum;//max����������ֵ 
		}
		ans++;
	}else{
		for(int i=1;i<=8;i++){//��ÿ���������Ǵӵ�һ�п�ʼ�� 
			if(lie[i]==0 && xie1[begin+i-1]==0 && xie2[begin-i+8]==0){
				lie[i]=1;
				xie1[begin+i-1]=1;
				xie2[begin-i+8]=1;
				HuangHou(begin+1,sum+qipan[begin][i]);//������һ�� 
				lie[i]=0;
				xie1[begin+i-1]=0;
				xie2[begin-i+8]=0;
			}
		}
	} 
}
int main(){
	for(int i=1;i<=8;i++){//¼������ 
		for(int j=1;j<=8;j++){
			scanf("%d",&qipan[i][j]);
		}
	}
	HuangHou(1,0);//�ӵ�һ�п�ʼ���� 
	printf("�ܷ�������%d\n����ֵ���ģ�%d",ans,max);
	return 0;
}            

