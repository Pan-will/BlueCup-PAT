#include<stdio.h> 
int main(){
	int index;
	int n;
	scanf("%d",&n);
	for(index=0; n>1; index++){
		if(n%2 == 0){
			n = n/2;
		}else if(n%2 == 1){
			int k = 3*n+1;
			n = k/2;
		}
	}
	printf("%d",index);
}
