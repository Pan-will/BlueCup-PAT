#include<stdio.h>
int main(){
	int n,sid,score,max=0,max_num;
	int school[100001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&sid,&score);
		school[sid] += score;
		if(school[sid] >= max){
			max = school[sid];
			max_num = sid;
		}
	}
	printf("%d %d",max_num,max);
	return 0;
}
