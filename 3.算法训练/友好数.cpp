#include<stdio.h>
main(){
	int m,n;
	int Ym=0,Yn=0;
	scanf("%d%d",&m,&n);
	//m��Լ����(��m��) 
	for(int i=1;i<=m/2;i++){
		if(m%i==0){
			Ym+=i;
		}
	}
	//n��Լ����(��n��)
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			Yn+=i;
		}
	}
	if(Ym==n && Yn==m)
		printf("yes");
	else
		printf("no");
}
