#include<stdio.h>
#include<string.h> 
#include<math.h>
#define max 15
int n,x,y;
int qipan[max][max];//�����̣�1��ʾ���ܷŻʺ�0��ʾ�ܷ�
int lie[max];//����һ��n�� 
int xie1[max];//����ӨI���K�Խ���
int xie2[max];//����ӨK���I�Խ���
int sum=0;//���ж����ַŷ������ 
void HuangHou(int i){
	for(int j=1;j<=n;j++){//��ÿ���������Ǵӵ�һ�п�ʼ�� 
		if(qipan[i][j]==1 || lie[j]==1 || xie1[i+j-1]==1 || xie2[i-j+n]==1){
			continue;
		}
//		else{
			lie[j]=1;
			xie1[i+j-1]=1;
			xie2[i-j+n]=1;
			if(i==n){//��ʾ�������˵�n��,˵���˴�Ϊ��Ч���� 
				sum++;
			}else{
				HuangHou(i+1);//������һ�� 
			}
			lie[j]=0;
			xie1[i+j-1]=0;
			xie2[i-j+n]=0;
//		} 
	}
}
int main(){
	scanf("%d%d%d",&n,&x,&y);//qipan[x][y]�ǻ��� 
	qipan[x][y]=1;//���ϼ�����Χ��9��λ�ò��ܷŻʺ�,����Ϊ1 
	qipan[x-1][y-1]=1;
	qipan[x-1][y]=1;
	qipan[x-1][y+1]=1;
	qipan[x][y-1]=1;
	qipan[x][y+1]=1;
	qipan[x+1][y-1]=1;
	qipan[x+1][y]=1;
	qipan[x+1][y+1]=1;
	HuangHou(1);//�ӵ�һ�п�ʼ����,n��ʾ���̹�ģ 
	printf("%d",sum);
	return 0;
}            

