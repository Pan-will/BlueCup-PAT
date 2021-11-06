#include<stdio.h>
#define max 1000
int a[max];
int n,m;
void change(int x,int y){
	int temp = a[x-1];
	a[x-1] = a[y-1];
	a[y-1] = temp;
}
int main(){
	scanf("%d%d",&n,&m);
	int x,y;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	while(m--){
		scanf("%d%d",&x,&y);
		change(x,y);
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

