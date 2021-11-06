#include<stdio.h>
#include<string.h>
int main(){
	char begin[1000],hope[1000];
	int sum1=0,sum2=0;
	scanf("%s\n%s",&begin,&hope);
	
	for(int i=0;i<=strlen(hope)/2;i++){
		for(int j=0;j<strlen(begin);j++){
			if(begin[j] == hope[i]){
				begin[j] = '*';
				hope[i] = '*';
				continue;
			}
		}
	}
	for(int i=0;i<strlen(begin);i++){
		if(begin[i] != '*')
			sum1 += 1;
	}
	for(int i=0;i<strlen(hope);i++){
		if(hope[i] != '*')
			sum2 += 1;
	}
	
	if(sum2 != 0)
		printf("No %d",sum2);
	else
		printf("Yes %d",sum1);
	return 0;
}
