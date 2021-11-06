/*26*/
#include<stdio.h>
int main(){
	for(int i=1;i<100;i++){
		int sum=0;//点蜡烛的数量和 
		for(int j=i;j<100;j++){
			sum+=j;
			if(sum==236){
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}
