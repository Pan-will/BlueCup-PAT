/*
	如果员工工作的时间在40 到50 个小时之间，
	那么对于前40 个小时，仍按常规方法计算；
	而对于剩余的超额部分，每小时的薪水按1.5 倍计算。
	如果员工工作的时间超过了50 个小时，
	那么对于前40 个小时，仍按常规方法计算；
	对于40～50 个小时之间的部分，每小时的薪水按1.5 倍计算；
	而对于超出50 个小时的部分，每小时的薪水按2 倍计算。
	
	输入格式：
	    输入只有一行，包括一个整数和一个实数，分别表示工作时间和每小时薪水。
　　输出格式：
		输出只有一个实数，表示周薪，保留小数点后2位。
*/
#include<stdio.h> 
int main(){
	int hour;
	double Allprice,price;
	scanf("%d%lf",&hour,&price);
	if(hour<=40){
		Allprice = hour*price;
	}else if(hour>40 && hour<=50){
		Allprice = 40*price + (hour-40)*price*1.5;
	}else if(hour>50){
		Allprice = 40*price + 10*price*1.5+(hour-50)*price*2;
	}
	printf("%.2f",Allprice);
}
