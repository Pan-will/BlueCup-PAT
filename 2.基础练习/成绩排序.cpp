#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char name[20];
	char sex[20];
	char year[20];
	int score[200];
	
	int max = -1;
	int mix = 200;
	/*��߷�����Ϣ*/
	char maxname[20];
	char maxsex[20];
	char maxyear[20];
	/*��ͷ�����Ϣ*/ 
	char mixname[20];
	char mixsex[20];
	char mixyear[20];
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",name);
		scanf("%s",sex);
		scanf("%s",year);
		scanf("%d",&score[i]);
		/*����ǰ����ķ�����mixС���򽫴�����Ϣ��¼Ϊ��ͷ���*/
		if(score[i]<mix){
			strcpy(mixname,name);
			strcpy(mixsex,sex);
			strcpy(mixyear,year);
			mix = score[i];
		}
		/*����ǰ����ķ�����max���򽫴�����Ϣ��¼Ϊ��߷���*/
		if(score[i]>max){
			strcpy(maxname,name);
			strcpy(maxsex,sex);
			strcpy(maxyear,year);
			max = score[i];
		}
	}
	printf("\n����ߣ�%s\t�Ա�%s\t���䣺%s\n",maxname,maxsex,maxyear);
	printf("����ߣ�%s\t�Ա�%s\t���䣺%s\n",mixname,mixsex,mixyear);
} 
