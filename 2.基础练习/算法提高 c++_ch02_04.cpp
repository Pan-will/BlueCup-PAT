#include<stdio.h> 
#include<math.h>
int main(){
	int m,i,k,h=0,leap=1;
	for(m=2;m<=100;m++){ 
		k=sqrt(m+1);
		for(i=2;i<=k;i++)
			if(m%i==0){
				leap=0;
				break;
			}
		if(leap){
			printf("%d\n",m);
		}
		leap=1;
	}
}
