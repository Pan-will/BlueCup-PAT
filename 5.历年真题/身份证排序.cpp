#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
long long date[20];
int cmp(const void *a,const void *b){
	long long c = *(long long *)b;
	long long d = *(long long *)a;
	
	return ((c-d>0)?1:-1);
}
main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&date[i]);
	}

	qsort(date,n,sizeof(date[0]),cmp);
	printf("\n按身份证号码降序为：\n\n");
	for(int i=0;i<n;i++){
		printf("%lld\n",date[i]);
	}
}
