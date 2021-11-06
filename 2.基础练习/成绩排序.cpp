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
	/*最高分者信息*/
	char maxname[20];
	char maxsex[20];
	char maxyear[20];
	/*最低分者信息*/ 
	char mixname[20];
	char mixsex[20];
	char mixyear[20];
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",name);
		scanf("%s",sex);
		scanf("%s",year);
		scanf("%d",&score[i]);
		/*若当前输入的分数比mix小，则将此条信息记录为最低分者*/
		if(score[i]<mix){
			strcpy(mixname,name);
			strcpy(mixsex,sex);
			strcpy(mixyear,year);
			mix = score[i];
		}
		/*若当前输入的分数比max大，则将此条信息记录为最高分者*/
		if(score[i]>max){
			strcpy(maxname,name);
			strcpy(maxsex,sex);
			strcpy(maxyear,year);
			max = score[i];
		}
	}
	printf("\n最高者：%s\t性别：%s\t年龄：%s\n",maxname,maxsex,maxyear);
	printf("最低者：%s\t性别：%s\t年龄：%s\n",mixname,mixsex,mixyear);
} 
