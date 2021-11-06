#include<stdio.h>
void decshow(int x){
	if(x>1){
		decshow(x/8);
	}
	printf("%d",x%8);
}
int main(){
	int x;
	scanf("%d",&x);
	decshow(x);
	printf("\n");
}
