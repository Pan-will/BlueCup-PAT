#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*����һ���ṹ��*/
typedef struct Stu{
	char name[10];
	int id;
	int score;
}stu;
/*	��������(�ص�)����cmp�� 
		�������ͱ�����int;
		�������������ͱ��붼��const void *;
		���������,��ô�������a��b�󷵻�һ����ֵ,С��ֵ,��ȷ���0;
*/ 
int cmp(const void *a,const void *b){
	/* *(stu*)a����Ϊ��a�Ǹ�void *���ͣ�Ҫ��
	��(stu*������ת��stu*���ͣ�Ȼ������*ȡֵ��
	���stu���ͣ����ܱȽϴ�С��*/
	stu c = *(stu*)a;
	stu d = *(stu*)b;
	//���ɼ��ߵ�����
//	return c.score-d.score; 
	//�������ַ������ֵ����� 
	if(strcmp(c.name,d.name)>0){
		return strcmp(c.name,d.name);
	}
	else{
		if(strcmp(c.name,d.name)==0){
			return c.id-d.id;
		}
	}
}
main(){
	int n;
	stu st[10];//����һ���ṹ������ 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d",st[i].name,&st[i].id,&st[i].score);
	}
	/*
	qsort���������� 
		1 �����������׵�ַ;
		2 �����д�����Ԫ������;
		3 ��Ԫ�ص�ռ�ÿռ��С,�Ƽ�ʹ��sizeof(s[0])����,�ر��ǶԽṹ�� ; 
		4 ָ������ָ�룬����ȷ�������˳��.
		5 ���Ҫ��������в�������,�����һ��s[n]�������������s[i]��ʼ��m��Ԫ��,ֻ��Ҫ
�ڵ�һ���͵ڶ��������Ͻ���һЩ�޸�:qsort(&s[i],m,sizeof(s[i]),cmp);
	*/
	qsort(st,n,sizeof(st[0]),cmp);
//	printf("\n\n���ɼ�������Ϊ��\n\n");
	for(int i=0;i<n;i++){
		printf("%s %d %d\n",st[i].name,st[i].id,st[i].score);
	}
}
