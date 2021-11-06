#include<stdio.h> 
main(){
	int n,m,flag=0;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(m+30>=a[i]){
			flag++;
		}
	}
	printf("%d",flag);
}
