#include<stdio.h> 
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int fruit[n];
	int high=m+30;
	int flag=n;
	for(int i=0;i<n;i++){
		scanf("%d",&fruit[i]);
		if(fruit[i]<=high){
			flag--;
		}
	}
	printf("%d",flag);
	return 0;
}
