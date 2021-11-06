#include<stdio.h> 
#include<string.h>
int main(){
	int hang,lie;
	scanf("%d%d",&hang,&lie);
	if(hang<=0 || lie<=0) return 0;
	int flag = hang;
	while(flag--){
		for(int i=0;i<lie+1;i++) {
			if(i==lie)
				printf("+");
			else
				printf("+-");
		}
		printf("\n");
		for(int j=0;j<lie+1;j++){
			if(j==lie)
				printf("|");
			else
				printf("| ");
		}
		printf("\n");
	}
	for(int i=0;i<lie+1;i++) {
		if(i==lie)
			printf("+");
		else
			printf("+-");
	}
	return 0;
}
