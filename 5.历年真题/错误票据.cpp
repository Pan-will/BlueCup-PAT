/*
	�������������»س� �ٰ�Ctrl+z �ٰ��»س�������
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define mem(A) memset(A,0,sizeof(A))
#define N 10000010
int piao[10010]; 
int main(){                       
   int n;
   scanf("%d",&n);
   getchar();//����˴��Ļ��з� 
   int num=0;//Ʊ���� 
   while(scanf("%d",&piao[num++]) != EOF);
   /*ð������*/
   for(int i=0; i<num-1; i++){
		for(int j=0; j<num-1-i; j++){
			if(piao[j]>piao[j+1]){
				int t = piao[j];
				piao[j] = piao[j+1];
				piao[j+1] = t;
			}
		}
	}
	int duan=0,chong=0;
   	for(int i=0;i<num;i++){
        if(piao[i]==piao[i-1])
           	chong=piao[i];
       	else if(piao[i]-piao[i-1]!=1)
           	duan=piao[i-1]+1;
   	}
   	printf("%d %d",duan,chong);
   	return 0;
} 
