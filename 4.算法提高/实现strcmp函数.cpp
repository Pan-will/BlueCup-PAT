#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*����һ���ṹ��*/
typedef struct Stu{
	char str[100];
}stu;
int cmp(const void *a,const void *b){
	stu c = *(stu*)a;
	stu d = *(stu*)b;
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
main(){
	stu st[100];
	for(int i=0;i<2;i++){
		scanf("%s",&st[i]);
	}
	qsort(st,2,sizeof(st[0]),cmp);
	return 0;
}
