#include<stdio.h> 
#include<math.h>
main(){
	long long L,R;
	long long m,i,k,sum=0,leap=1;
	scanf("%lld%lld",&L,&R);
	if(R<L){
		printf("�������");
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
				printf("%lld ",m);//��ӡ�������������� 
				sum++;//��¼���� 
			}
			leap = 1;
		}
		printf("\n%lld",sum);
	}
}

