/*
1、把15位身份证号码中的年份由2位(7,8位)改为四位;
2、最后添加一位验证码。验证码的计算方案：
　 将前 17 位分别乘以对应系数 (7 9 10 5 8 4 2 1 6 3 7 9 10 5 8 4 2) 
   并相加，然后除以 11 取余数，0-10 分别对应 1 0 x 9 8 7 6 5 4 3 2。
*/
#include<stdio.h>
int xishu[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char duiying[17]={"10x98765432"};
int main(){
	char num1[18];
	int num2[18];
	int sum=0;
	scanf("%s",num1);
	/*将数位往后移两位*/
	for(int i=14;i>=6;i--){
		num1[i+2]=num1[i];
	}
	num1[6]='1';
	num1[7]='9';
	for(int i=0;i<17;i++){
		num2[i]=num1[i]-'0';
		sum+=num2[i]*xishu[i];
	}
	sum%=11;//除以11取余数
	num1[17]=duiying[sum];
	printf("%s",num1);
//	for(int i=0;i<18;i++){
//		printf("%c",num1[i]);
//	}
}
