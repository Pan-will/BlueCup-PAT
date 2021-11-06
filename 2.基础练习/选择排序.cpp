#include<stdio.h> 
int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0; i<N; i++){
		scanf("%d",&a[i]);
	}
	//Ñ¡ÔñÅÅĞò
	for(int i=0;i<N-1;i++) {
		for(int j=i+1;j<N;j++){
			if(a[i]>a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	} 
	printf("ÉıĞòÎª£º");
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
}
