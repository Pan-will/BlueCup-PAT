/*
*���м��㷨
*code CG 2008 01 05
*/
#include"stdio.h"
#define FALSE 0
#define TRUE 1
#define W 10
#define R 20
int M ; 		/*�ܽ�����*/
int N ; 		/*��Դ����*/
int ALL_RESOURCE[W];/*������Դ����Ŀ�ܺ�*/
int MAX[W][R]; /*M�����̶�N����Դ�����Դ������*/
int AVAILABLE[R]; /*ϵͳ������Դ��*/
int ALLOCATION[W][R]; /*M�������Ѿ��õ�N����Դ����Դ��*/
int NEED[W][R]; /*M�����̻���ҪN����Դ����Դ��*/
int REQUEST[R]; /*������Դ����*/
/*
*��������output
*���ܣ������Դ�������
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
*������ ��modify
*���ܣ��ı������Դ���Ѿ��õ���Դ�ͻ���Ҫ����Դ��ֵ
*������int k �޸ı��ΪK��P������
*/
void modify(int k)
{
	int j;
	for(j = 0 ; j < N ; j++){/*�޸�����*/
	 AVAILABLE[j] = AVAILABLE[j] - REQUEST[j];/*�޸Ŀ�����Դ*/
	 ALLOCATION[k][j] = ALLOCATION[k][j] + REQUEST[j];/*�޸ķ�����Դ*/
	 NEED[k][j] = NEED[k][j] - REQUEST[j];/*�޸���Դ����*/
	}
}
/*
*��������undo
*���ܣ���ԭ������Դ���Ѿ��õ���Դ�ͻ���Ҫ����Դ��ֵ
*������������int k �޸ı��ΪK��P������
*/
void undo(int k){
	int j;
	for(j = 0 ; j < N ; j++){/*�޸�����*/
	 AVAILABLE[j] = AVAILABLE[j] + REQUEST[j]; /*�޸Ŀ�������*/
	 ALLOCATION[k][j] = ALLOCATION[k][j] - REQUEST[j]; /*�޸ķ������Դ*/
	 NEED[k][j] = NEED[k][j] + REQUEST[j];/*�޸���Դ����*/
	 }
}
/*
*��������chkerr
*���ܣ�����޸Ĳ����Ƿ�ȫ
*/
int chkerr(int s){
	int WORK , FINISH[W];
	int i , j;
	for(i = 0 ; i < M ; i++)/*���FINISH*/
		FINISH[i] = FALSE;
	for(j = 0 ; j < N ; j++){/*��һ���*/
		WORK = AVAILABLE[j];
		i = s;
		do{
			if(FINISH[i] == FALSE && NEED[i][j] <= WORK){/*����������*/
					WORK = WORK + ALLOCATION[i][j];
				FINISH[i] = TRUE;
				i = 0;
			}
			else
				i++;
		}while(i<M);
		for(i = 0 ; i < M ; i++)/*ֻҪһ�������㣬����ȫ*/
			if(FINISH[i] == FALSE){
				printf("Error : UnSafe Allocation!\n");
				return 1;
			}
	 }
	printf("OK : Allocation OK\n");
	return 0;
}
/*
*��������bank
*���� �����м��㷨��ʵ��
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
			if(REQUEST[j] > NEED[i][j]){/*�������Դ������������Դ*/
				printf("Error: Invalid Input!\n");
				flag = FALSE;
			}
			else{
				if(REQUEST[j]>AVAILABLE[j]){/*���������Դ�����ڿ�����Դ��*/
					printf("Error: Invalid Input!\n");
					flag = FALSE;
				}
			}/*else*/
		 }/*for*/
		 if(flag)
		 {
			modify(i); /*�޸���Դ��*/
			if(chkerr(i)){/*��ȫ?*/
				undo(i); /*�ָ���Դ��*/
				output();/*���*/
			}
			else
				output(); /*���*/
			}
		 else
			output();
	}/*while*/
}/*bank*/
/*������*/
int main(){
	int i , j , p;
	printf("Input Process Numbers M=");/*��������*/
	scanf("%d", &M);
	printf("Input Resource Category N=");/*��Դ����*/
	scanf("%d", &N);
	printf("Input Number of All Resource each Category:\n");/*��Դ��Ŀ*/
	for(i = 0 ; i < N ; i++)
		scanf("%d", &ALL_RESOURCE[i]);
	printf("Input Max Resource Process Need:\n");/*�����Դ����*/
	for (i = 0 ; i < M ; i++){
		for (j = 0 ; j < N ; j++){
		do{
			scanf("%d", &MAX[i][j]);
			if (MAX[i][j] > ALL_RESOURCE[j])/*���������ã�*/
				printf("\nError: Invalid Input!\n");
		 }while (MAX[i][j] > ALL_RESOURCE[j]);
		}
	 }/*for*/
	printf("Input Resource Process Allocated:\n");
	for (i = 0 ; i < M ; i++){
		for (j = 0 ; j < N ; j++){
			do{
				scanf("%d", &ALLOCATION[i][j]);
				if (ALLOCATION[i][j] > MAX[i][j])/*�����������*/
					printf("\nError: Invalid Input!\n");
			}while (ALLOCATION[i][j] > MAX[i][j]);
		}
	 }/*for*/
	for(j = 0 ; j < N ; j++){
		p = ALL_RESOURCE[j];
		for(i = 0 ; i < M ; i++){
			p -= ALLOCATION[i][j];/*��ȥ�Ѿ�������Դ*/
			AVAILABLE[j] = p;
			if(AVAILABLE[j]<0)
				AVAILABLE[j] = 0;/*��������*/
		}/*for*/
	 }/*for*/
	for (i = 0 ; i < M ; i++)
		for(j = 0 ; j < N ; j++)
			NEED[i][j] = MAX[i][j] - ALLOCATION[i][j];/*����Ҫ����Դ*/
	output();
	bank();/*���м��㷨*/
	return 0;
}/*main*/


