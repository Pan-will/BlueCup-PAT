/*
最初本金、年利率(0<lilv<30%)、利息、
每月还款额、还款期限(6<=time<=120)
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mian(){
	double ben=10000.00;//初始本金10000 
	double lilv,lixi;//年利率、利息、本金结余 
	double dmon;//每月还款额
	int time;//还款期限
	scanf("%lf",&lilv);
	scanf("%d",&time);
	for(int i=0;ben<0,time=0;i++) {
		lixi = ben*(lilv/100)/12;//算出本月产生的利息 
		ben = ben + lixi - dmon;//本月本金结余为：本金 + 利息 - 每月固定还款额
		time--;
	}
	printf("%lf",dmon);
	return 0;
}
