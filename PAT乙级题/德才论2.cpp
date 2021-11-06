#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
/*定义一个结构体*/
typedef struct Stu{
	char s_id[30];
	int defen;//德分 
	int caifen;//才分 
	int sum;//总分 
}stu;

int cmp(const void *c,const void *d){
	stu a=*(stu*)c;
	stu b=*(stu*)d;
	int flag = 0;//0假,非0均为真
	if(a.sum != b.sum)
		flag = b.sum - a.sum;//总分从大到小 
	else{
		if(a.defen != b.defen)//德分不相等
			flag = b.defen - a.defen;//先按德分从大到小
		else//都相等的情况下
			flag = a.s_id - b.s_id;//则按照准考证升序排序
	}
	return flag;
}

int main(){
	long n;//考生数量 
	int l,h;//l及格分、h优秀分
	scanf("%ld %d %d",&n,&l,&h);
	stu sz[n];
	stu sz1[n];//一类生 
	int num1=0;
	stu sz2[n];//二类生 
	int num2=0;
	stu sz3[n];//三类生 
	int num3=0;
	stu sz4[n];//四类生 
	int num4=0;
	int count = 0;//有资格录取的学生数量
	for(int i=0;i<n;i++){
		scanf("%s %d %d",&sz[i].s_id,&sz[i].defen,&sz[i].caifen);
		sz[i].sum = sz[i].caifen + sz[i].defen;
		if(sz[i].defen >= l && sz[i].caifen >= l){//及格才有资格录取 
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
