#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
/*����һ���ṹ��*/
typedef struct Stu{
	char name[30];
	char sex[20];
	int age;
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
	stu c=*(stu*)a;
	stu d=*(stu*)b;
	//���ɼ��������� 
	return c.score-d.score;
}
main(){
	int n;
	stu sz[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %s %d %d",&sz[i].name,&sz[i].sex,&sz[i].age,&sz[i].score);
	}
	/*
	qsort���������� 
		1 �����������׵�ַ;
		2 �����д�����Ԫ������;
		3 ��Ԫ�ص�ռ�ÿռ��С,�Ƽ�ʹ��sizeof(s[0])����,�ر��ǶԽṹ�� ; 
		4 ָ������ָ�룬����ȷ�������˳��.
	ע�⣺���Ҫ��������в�������,�����һ��s[n]�������������s[i]��ʼ��m��Ԫ��,ֻ��Ҫ
�ڵ�һ���͵ڶ��������Ͻ���һЩ�޸�:qsort(&s[i],m,sizeof(s[i]),cmp);
	*/
	qsort(sz,n,sizeof(sz[0]),cmp);
	for(int i=0;i<n;i++){
		printf("%s %s %d %d\n",sz[i].name,sz[i].sex,sz[i].age,sz[i].score);
	}
}
