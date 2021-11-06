/*
*银行家算法
*code CG 2008 01 05
*/
#include"stdio.h"
#define FALSE 0
#define TRUE 1
#define W 10
#define R 20
int M ; 		/*总进程数*/
int N ; 		/*资源种类*/
int ALL_RESOURCE[W];/*各种资源的数目总和*/
int MAX[W][R]; /*M个进程对N类资源最大资源需求量*/
int AVAILABLE[R]; /*系统可用资源数*/
int ALLOCATION[W][R]; /*M个进程已经得到N类资源的资源量*/
int NEED[W][R]; /*M个进程还需要N类资源的资源量*/
int REQUEST[R]; /*请求资源个数*/
/*
*函数名：output
*功能：输出资源分配情况
*/
void output()
{
	int i,j;
	printf("All Resource:\n");
	for(j = 0 ; j < N ;j++)
		printf("R%d:%d\n", j , ALL_RESOURCE[j]);
	printf("Resource Available:\n");
	for(j = 0 ; j < N ; j++)
		printf("R%d:%d\n", j , AVAILABLE[j]);
	printf("Process Resource Needed:\n");
	printf("| PID |");
	for(j = 0 ; j < N ; j++)
		printf(" R%d |", j);
	printf("\n");
	for(i = 0 ; i < M ; i++)
		for(i = 0 ; i < M ; i++)
		{
			printf("|%-5d|", i);
				for(j = 0 ; j < N ; j++)
					printf("%-4d|", NEED[i][j]);
			printf("\n");
	}
	printf("Process Resource Allocated:\n");
	printf("| PID |");
	for(j = 0 ; j < N ; j++)
		printf(" R%d |", j);
	printf("\n");
	for(i = 0 ; i < M ; i++)
	{
	 printf("|%-5d|", i);
		for(j = 0 ; j < N ; j++)
			printf("%-4d|", ALLOCATION[i][j]);
	 printf("\n");
	}
}/*output*/
/*
*函数名 ：modify
*功能：改变可用资源和已经拿到资源和还需要的资源的值
*参数：int k 修改编号为K的P的数据
*/
void modify(int k)
{
	int j;
	for(j = 0 ; j < N ; j++){/*修改数据*/
	 AVAILABLE[j] = AVAILABLE[j] - REQUEST[j];/*修改可用资源*/
	 ALLOCATION[k][j] = ALLOCATION[k][j] + REQUEST[j];/*修改分配资源*/
	 NEED[k][j] = NEED[k][j] - REQUEST[j];/*修改资源需求*/
	}
}
/*
*函数名：undo
*功能：还原可用资源和已经拿到资源和还需要的资源的值
*参数：参数：int k 修改编号为K的P的数据
*/
void undo(int k){
	int j;
	for(j = 0 ; j < N ; j++){/*修改数据*/
	 AVAILABLE[j] = AVAILABLE[j] + REQUEST[j]; /*修改可用数据*/
	 ALLOCATION[k][j] = ALLOCATION[k][j] - REQUEST[j]; /*修改分配的资源*/
	 NEED[k][j] = NEED[k][j] + REQUEST[j];/*修改资源需求*/
	 }
}
/*
*函数名：chkerr
*功能：检查修改操作是否安全
*/
int chkerr(int s){
	int WORK , FINISH[W];
	int i , j;
	for(i = 0 ; i < M ; i++)/*清空FINISH*/
		FINISH[i] = FALSE;
	for(j = 0 ; j < N ; j++){/*逐一检查*/
		WORK = AVAILABLE[j];
		i = s;
		do{
			if(FINISH[i] == FALSE && NEED[i][j] <= WORK){/*符合条件？*/
					WORK = WORK + ALLOCATION[i][j];
				FINISH[i] = TRUE;
				i = 0;
			}
			else
				i++;
		}while(i<M);
		for(i = 0 ; i < M ; i++)/*只要一个不满足，不安全*/
			if(FINISH[i] == FALSE){
				printf("Error : UnSafe Allocation!\n");
				return 1;
			}
	 }
	printf("OK : Allocation OK\n");
	return 0;
}
/*
*函数名：bank
*功能 ：银行家算法的实现
*/
void bank()
{
	int i , j;
	int flag = TRUE;
	printf("Use Ctrl+C break..\n");
	while(TRUE){
		i = -1;
		while(i < 0 || i >= M)
		{
		printf("Input Process to Allocat PID=");
		 scanf("%d", &i);
		 if(i < 0 || i >= M)
			printf("Error: Invalid Input!\n");
		}
		printf("Input Resource Need\n");
		 for (j = 0 ; j < N ; j++)
		 {
			printf("R%d=", j);
			scanf("%d", &REQUEST[j]);
			if(REQUEST[j] > NEED[i][j]){/*请求的资源数大于请求资源*/
				printf("Error: Invalid Input!\n");
				flag = FALSE;
			}
			else{
				if(REQUEST[j]>AVAILABLE[j]){/*若请求的资源数大于可用资源数*/
					printf("Error: Invalid Input!\n");
					flag = FALSE;
				}
			}/*else*/
		 }/*for*/
		 if(flag)
		 {
			modify(i); /*修改资源数*/
			if(chkerr(i)){/*安全?*/
				undo(i); /*恢复资源数*/
				output();/*输出*/
			}
			else
				output(); /*输出*/
			}
		 else
			output();
	}/*while*/
}/*bank*/
/*主函数*/
int main(){
	int i , j , p;
	printf("Input Process Numbers M=");/*进程数量*/
	scanf("%d", &M);
	printf("Input Resource Category N=");/*资源种类*/
	scanf("%d", &N);
	printf("Input Number of All Resource each Category:\n");/*资源数目*/
	for(i = 0 ; i < N ; i++)
		scanf("%d", &ALL_RESOURCE[i]);
	printf("Input Max Resource Process Need:\n");/*最大资源需求*/
	for (i = 0 ; i < M ; i++){
		for (j = 0 ; j < N ; j++){
		do{
			scanf("%d", &MAX[i][j]);
			if (MAX[i][j] > ALL_RESOURCE[j])/*大于最大可用？*/
				printf("\nError: Invalid Input!\n");
		 }while (MAX[i][j] > ALL_RESOURCE[j]);
		}
	 }/*for*/
	printf("Input Resource Process Allocated:\n");
	for (i = 0 ; i < M ; i++){
		for (j = 0 ; j < N ; j++){
			do{
				scanf("%d", &ALLOCATION[i][j]);
				if (ALLOCATION[i][j] > MAX[i][j])/*大于最大需求？*/
					printf("\nError: Invalid Input!\n");
			}while (ALLOCATION[i][j] > MAX[i][j]);
		}
	 }/*for*/
	for(j = 0 ; j < N ; j++){
		p = ALL_RESOURCE[j];
		for(i = 0 ; i < M ; i++){
			p -= ALLOCATION[i][j];/*减去已经分配资源*/
			AVAILABLE[j] = p;
			if(AVAILABLE[j]<0)
				AVAILABLE[j] = 0;/*清理数据*/
		}/*for*/
	 }/*for*/
	for (i = 0 ; i < M ; i++)
		for(j = 0 ; j < N ; j++)
			NEED[i][j] = MAX[i][j] - ALLOCATION[i][j];/*求还需要的资源*/
	output();
	bank();/*银行家算法*/
	return 0;
}/*main*/


