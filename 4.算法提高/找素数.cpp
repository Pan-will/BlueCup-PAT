#include<stdio.h> 
#include<math.h>
main(){
	long long L,R;
	long long m,i,k,sum=0,leap=1;
	scanf("%lld%lld",&L,&R);
	if(R<L){
		printf("输入错误");
		return 0;
	}else{
		for(m=L;m<=R;m++){ 
			k=sqrt(m);
			for(i=2;i<=k;i++){
				if(m%i == 0){
					leap=0;
					break;
				}
			}
			if(leap==1){
				printf("%lld ",m);//打印区间内所有素数 
				sum++;//记录个数 
			}
			leap = 1;
		}
		printf("\n%lld",sum);
	}
}

