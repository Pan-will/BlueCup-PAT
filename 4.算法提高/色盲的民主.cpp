/*
	ע�⣺
	%s���ܽ��տո񡢻س���
	gets()�Իس���EOF������ 
	getchar()���������س����ո����
	gets()һ����getchar()���ʹ��,getchar()���ڴ��������в���Ҫ�Ļ��м��ո� 
*/ 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*����һ���ṹ��:����������ɫ�����Ƽ������*/
typedef struct Color{
	char color[50];//��ͬ����ɫ 
	int num;//ÿ����ɫ�ĸ��� 
}col;
int cmp(const void *a,const void *b){
	col c = *(col*)a;
	col d = *(col*)b;
	//�������Ķ��ٶ���ɫ���ƽ����ֵ����� 
	if(c.num == d.num){
		return strcmp(c.color,d.color);
	}else{
		return d.num - c.num;
	}
}
int main(){
	col co[2000];//����ṹ������ 
	char color[30];//��ɫ�������20���ַ�
	int re=0;//����Ҫ�������ɫ����,��ֵΪ0 
	int n;//�������� 
	scanf("%d",&n);
	getchar();//����n����һ���س�����getchar()�����,����gets�ᶼ��һ�����ַ��� 
	for(int i=0;i<n;i++){
		int j=0;//�±� 
		//����һ����ɫ����
//		scanf("%s",&color); 
		gets(color);//%s���ܴ���س����пո��,������ÿ�����ݶ���һ������,��gets���� 
		//���ж���û�д��Ŵ���ɫ
		for(j=0;j<re;j++){
			if(strcmp(color,co[j].color)==0)
				break;
		}
		//���Ѿ����ˣ�����ɫ����+1
		if(re!=j){
			co[j].num++;
		}
		//��û�д棬��ʱ���ȥ 
		else{
			strcpy(co[re].color,color);
			co[re].num=1;//����ɫ������Ϊ1
			re++;//��Ҫ�������ɫ����+1 
		}
	}
	//���� 
	qsort(co,re,sizeof(co[0]),cmp);
	for(int i=0;i<n;i++){ 
		if(co[i].num == co[0].num){
			printf("%s\n",co[i].color);
		}
	}
	return 0;
}
