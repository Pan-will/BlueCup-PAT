#include<stdio.h> 
#include<string.h>
int zhongjiang(int piao,int jiang[]){//����num��ò�Ʊ���˼��Ƚ� 
	int flag=0;
	for(int i=0;i<7;i++){
		if(piao==jiang[i]){
			flag=1;
		}
	}
	return flag;
}
int main(){
	int jiang[7]={0};//���н����߸�����
	int n;//���Ʊ����
	scanf("%d",&n);
	int piao[7]={0};//��ÿ�Ų�Ʊ���߸�����
	int ok[7]={0};//��7���н����ֵĳ��ִ���,��������� 
	getchar();//����س� 
	for(int i=0;i<7;i++){//�߸��н����� 
		scanf("%d",&jiang[i]);
	}
	for(int i=0;i<n;i++){//��ѭ������ 
		for(int j=0;j<7;j++){//��ÿ������7����,��һ�Ų�Ʊ 
			scanf("%d",&piao[j]);
		}
		int num=0;//��ÿ�Ų�Ʊ���н�����ĸ��� 
		for(int k=0;k<7;k++){
			if(zhongjiang(piao[k],jiang)){
				num++;
			}
		}
		if(num==0){
			continue;
		}else if(num==7){
			ok[0]++;
		}else if(num==6){
			ok[1]++;
		}else if(num==5){
			ok[2]++;
		}else if(num==4){
			ok[3]++;
		}else if(num==3){
			ok[4]++;
		}else if(num==2){
			ok[5]++;
		}else if(num==1){
			ok[6]++;
		}
	}
	for(int i=0;i<7;i++){
		printf("%d ",ok[i]);
	}
	return 0;
}
