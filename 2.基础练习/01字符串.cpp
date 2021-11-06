#include <stdio.h>
int main(){
	int a[5]={0};
	int temp;
	int times;
	int i,j;
	printf("00000\n");
	for(times=1;times<=31;times++){//Ñ­»·31´Î
		i=0;
		a[i]+=1;
		while(a[i]>=2){
		    temp=a[i]/2;
		    a[i]=a[i]%2;
		    i++;
		    a[i]=a[i]+temp;
		}
		for(j=4;j>=0;j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
}
