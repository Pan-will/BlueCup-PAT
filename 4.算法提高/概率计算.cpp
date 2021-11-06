#include<stdio.h>
#include<time.h>
int main(){
	int m,a,b,x;
	scanf("%d%d%d%d",&m,&a,&b,&x);
	int sum[m];
//	srand((unsigned)time(NULL));
	while(m--){
		for(int i=0;i<m;i++){
			sum[i] = rand()%b;
		}	
	}
	for(int i=0;i<m;i++){
		printf("%d",sum[i]);
	}
}
