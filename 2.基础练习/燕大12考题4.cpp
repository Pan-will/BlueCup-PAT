#include<stdio.h>
/*
题目：一小球从100米高度落下，每次反弹落下高度的一半，
求第十次落下时所经过的总路程，以及第十次反弹多高。 
*/
main(){
	float sum=0,high=100,n;
	int i;
	for(i=0;i<10;i++){
		n = high/2.0;//n表示每次反弹的高度 
		sum = sum+high+n;//一次弹跳的总路程=落下高度+反弹高度 
		high = n;//改变下一次的落下高度：为上一次的反弹高度 
	}
	printf("共经过%.2f米\n",sum);
	printf("第10次反弹%.2f米高",n);
}
