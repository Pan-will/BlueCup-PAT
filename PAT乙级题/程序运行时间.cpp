#include<stdio.h> 
int main(){
	int h,m,s;//ʱ,��,�� 
	long c1,c2;
	scanf("%ld %ld",&c1,&c2);
	long sum = c2-c1;
	//��������Ĳ��� 
	if(sum % 100 >= 50){
		sum = sum/100 +1;
	}else{
		sum = sum/100;
	}
	h = sum/3600;
	m = sum%3600/60;
	s = sum%60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
