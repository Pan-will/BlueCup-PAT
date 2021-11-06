#include<stdio.h>
main(){
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	/*Ã°ÅÝ*/
	for(int i=0; i<N-1; i++){
		for(int j=0; j<N-1-i; j++){
			if(a[j]<a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	/*Êä³ö*/
	for(int i=0; i<10; i++){
		printf("%d ", a[i]);
	}
}
