#include<stdio.h> 
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	int discount;
	if(x<5) discount=10;
	else if(x>=5 && x<10) discount=9;
	else if(x>=10 && x<20) discount=8;
	else if(x>=20 && x<30) discount=7;
	else discount=6;
	switch(discount){
		case 10:
			printf("%d",x*y);
			break;
		case 9:
			printf("%.2f",x*y*0.9);
			break;
		case 8:
			printf("%.2f",x*y*0.8);
			break;
		case 7:
			printf("%.2f",x*y*0.7);
			break;
		case 6:
			printf("%.2f",x*y*0.6);
			break;
	}
	return 0;
}
