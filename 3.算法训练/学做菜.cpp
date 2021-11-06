#include<stdio.h>
int main(){
	int a,b,c,d;
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;//没种菜数量初值赋0 
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	if(a-2>=0 && b-1>=0 && d-2>=0){
		a = a-2;
		b = b-1;
		d = d-2;
		sum1++;
	}
	if(a-1>=0 && b-1>=0 && c-1>=0 && d-1>=0){
		a = a-1;
		b = b-1;
		c = c-1;
		d = d-1;
		sum2++;
	}
	if(c-2>=0 && d-1>=0){
		c = c-2;
		d = d-1;
		sum3++;
	}
	if(b-3>=0){
		b = b-3;
		sum4++;
	}
	if(a-1>=0 && d-1>=0){
		a = a-1;
		d = d-1;
		sum5++;
	}
	printf("%d\n%d\n%d\n%d\n%d",sum1,sum2,sum3,sum4,sum5);
}
