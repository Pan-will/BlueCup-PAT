#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char line[100000*100];//ÿ�����ݵ������ 
int piao[10010];//Ʊ���� 
int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}
int main(){                     
   	int n;
   	scanf("%d",&n);
   	getchar();//����˴��Ļ��з� 
   	int num=0;//Ʊ����
	int index;//�����±� 
   	for(int i=0; i<n; i++){
		gets(line);//��һ���������ַ����ķ�ʽ����
		//�ֽ��ַ���Ϊһ���ַ���
		char *p = strtok(line," ");//lineΪҪ�ֽ���ַ���,�ո�ָ����ַ� 
		//atoi���ַ���תΪint����
		piao[index++]=atoi(p);//������תΪint���͸���Ʊ������ 
		while(p){
			p = strtok(NULL," ");
			if(p){
				piao[index++] = atoi(p);
			}
		}
		//���� 
		qsort(piao,index,sizeof(piao[0]),cmp);
	}
	int duan=0,chong=0;
   	for(int i=0;i<index-1;i++){
        if(piao[i]==piao[i-1])
           	chong=piao[i];
       	else if(piao[i]-piao[i-1]!=1)
           	duan=piao[i-1]+1;
   	}
   	printf("%d %d",duan,chong);
   	return 0;
} 
