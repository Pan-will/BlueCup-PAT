#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*����һ���ṹ��*/
typedef struct Data{
	char str[100];
}date;
int cmp(const void *a,const void *b){
	date c = *(date*)a;
	date d = *(date*)b;
	//�������ַ������ֵ����� 
	if(strcmp(c.str,d.str)>0){
		printf("-1");
		return strcmp(c.str,d.str);
	}else if(strcmp(c.str,d.str)<0){
		printf("1");
		return strcmp(c.str,d.str);
	}else if(strcmp(c.str,d.str)==0){
		printf("0");
		return strcmp(c.str,d.str);
	}
}
int main(){
	date dat[100];//����ṹ������
	for(int i=0;i<2;i++) {
		scanf("%s",dat[i].str);
	}
    qsort(dat,2,sizeof(dat[0]),cmp);
	return 0;
}
