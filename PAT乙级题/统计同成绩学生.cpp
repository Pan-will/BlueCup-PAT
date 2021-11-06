#include<stdio.h> 
int main(){
	int n,k,check;
	scanf("%d",&n);
	int score[n];
	for(int i=0;i<n;i++){
		scanf("%d",&score[i]);
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		int item = 0;
		scanf("%d",&check);
		for(int j=0;j<n;j++){
			if(score[j]<0) continue;//Ñ­»·ÓÅ»¯ 
			if(check == score[j]){
				item += 1;
				score[j] = -1;
			}
		}
		if(i == k-1)
			printf("%d",item);
		else
			printf("%d ",item);
	}
	return 0;
}
