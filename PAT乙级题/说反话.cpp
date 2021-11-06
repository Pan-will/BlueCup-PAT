#include<stdio.h>
#include<string.h>
main(){
	char str[100][100];
	int num=1;
	while(getchar() != '\n'){
		scanf("%s",str[num++]);
	}
	for(int j=num-1;j>=0;j--){
		if(j == num-1)
			printf("%s",str[j]);
		else 
			printf(" %s",str[j]);
	}
}

