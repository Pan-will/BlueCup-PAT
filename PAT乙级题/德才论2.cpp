#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
/*����һ���ṹ��*/
typedef struct Stu{
	char s_id[30];
	int defen;//�·� 
	int caifen;//�ŷ� 
	int sum;//�ܷ� 
}stu;

int cmp(const void *c,const void *d){
	stu a=*(stu*)c;
	stu b=*(stu*)d;
	int flag = 0;//0��,��0��Ϊ��
	if(a.sum != b.sum)
		flag = b.sum - a.sum;//�ִܷӴ�С 
	else{
		if(a.defen != b.defen)//�·ֲ����
			flag = b.defen - a.defen;//�Ȱ��·ִӴ�С
		else//����ȵ������
			flag = a.s_id - b.s_id;//����׼��֤��������
	}
	return flag;
}

int main(){
	long n;//�������� 
	int l,h;//l����֡�h�����
	scanf("%ld %d %d",&n,&l,&h);
	stu sz[n];
	stu sz1[n];//һ���� 
	int num1=0;
	stu sz2[n];//������ 
	int num2=0;
	stu sz3[n];//������ 
	int num3=0;
	stu sz4[n];//������ 
	int num4=0;
	int count = 0;//���ʸ�¼ȡ��ѧ������
	for(int i=0;i<n;i++){
		scanf("%s %d %d",&sz[i].s_id,&sz[i].defen,&sz[i].caifen);
		sz[i].sum = sz[i].caifen + sz[i].defen;
		if(sz[i].defen >= l && sz[i].caifen >= l){//��������ʸ�¼ȡ 
			count++;
			if(sz[i].defen >= h && sz[i].caifen >= h){
				sz1[num1] = sz[i];
				num1 += 1;
			}
			else if(sz[i].defen >= h && sz[i].caifen < h){
				sz2[num2] = sz[i];
				num2 += 1;
			} 
			else if(sz[i].defen < h && sz[i].caifen < h && sz[i].caifen <= sz[i].defen){
				sz3[num3] = sz[i];
				num3 += 1;
			} 
			else{
				sz4[num4] = sz[i];
				num4 += 1;
			}
		}
	}
	qsort(sz1,num1,sizeof(sz1[0]),cmp);
	qsort(sz2,num2,sizeof(sz2[0]),cmp);
	qsort(sz3,num3,sizeof(sz3[0]),cmp);
	qsort(sz4,num4,sizeof(sz4[0]),cmp);
	printf("%d\n",count);
	for(int i=0;i<num1;i++){
		printf("%s %d %d\n",sz1[i].s_id,sz1[i].defen,sz1[i].caifen);
	}
	for(int i=0;i<num2;i++){
		printf("%s %d %d\n",sz2[i].s_id,sz2[i].defen,sz2[i].caifen);
	}
	for(int i=0;i<num3;i++){
		printf("%s %d %d\n",sz3[i].s_id,sz3[i].defen,sz3[i].caifen);
	}
	for(int i=0;i<num4;i++){
		printf("%s %d %d\n",sz4[i].s_id,sz4[i].defen,sz4[i].caifen);
	}
	return 0;
}
