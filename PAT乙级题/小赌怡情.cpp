#include<stdio.h> 
/*
玩家下注赌第二个整数将会比第一个数大还是小
*/
int main(){
	int chouMa,num;
	int n1,b,t,n2;
	scanf("%d %d",&chouMa,&num);
	while(num>0){
		scanf("%d %d %d %d",&n1,&b,&t,&n2);
		if(t<=chouMa){
			if((n1<n2 && b==1) || (n1>n2 && b==0)){
				chouMa += t;
				printf("Win %d!  Total = %d.\n",t,chouMa);
			}else{
				chouMa -= t;
				printf("Lose %d.  Total = %d.\n",t,chouMa);
				if(chouMa == 0){
					printf("Game Over.");
					return 0;
				}
			}
		}else{
			printf("Not enough tokens.  Total = %d.\n",chouMa);
		}
		num--;
	}
	return 0;
}
