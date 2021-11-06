#include<stdio.h> 
int main(){
	int i,j,m,n;
	scanf("%d%d%d%d",&i,&j,&m,&n);
	float p = i/j;
	float q = m/n;
	printf("zrf is:%d/%d; ssh is:%d/%d\n",i,j,m,n);
	if(p<q){
		printf("(zrf==ssh) is:0; (zrf<ssh) is:1");
	}else if(p>q){
		printf("(zrf==ssh) is:0; (zrf<ssh) is:0");
	}else{
		printf("(zrf==ssh) is:1; (zrf<ssh) is:0");
	}
}
