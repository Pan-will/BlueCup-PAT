#include<stdio.h>
#include<stdlib.h>
/*判断闰年函数：四年一闰,百年不闰,四百年再闰.*/
bool leap(int year){
	if(year%4==0 && year%100!=0)
		return true;
	if(year%400==0)
		return true;
	return false;
}
/*年份带来的天数差*/
getDay1(int year){
	int sum=0;//记录年份带来的天数差
	if(year<=2011){
		for(int i=year;i<2011;i++){
			if(leap(i))
				sum+=366;
			else
				sum+=365;
		}
	}
	if(year>2011){
		for(int i=2011;i<year;i++){
			if(leap(i))
				sum+=366;
			else
				sum+=365;
		}
	}
	return sum;
}
/*月份带来的天数差*/
int getDay2(int year,int mon,int day){
	int sum=0;//记录月份带来的天数差
	for(int i=1;i<mon;i++){
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
			sum+=31;
		}
		if(i==4 || i==6 || i==9 || i==11){
			sum+=30;
		}
		if(i==2 && leap(year)){
			sum+=29;
		}
		if(i==2 && !leap(year)){
			sum+=28;
		}
	}
	sum = sum + day;
	return sum-1;//加到基准天数时其实多加了1 
}
/*
在得出天数之后，还要分情况，首先将得到的天数差day%7，得到星期差;

（1）如果给出的年份小于等于基础年份，那么应该从基础时间（星期六）
	向负方向数day%7天，注意1之后要变成7;
	
（2）如果给出的年份大于基础年份，那么应该从基础时间（星期六）
	向正方向数day%7天，注意7之后要变成1.
	
注：abs():取绝对值函数。 
*/
int main(){
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int sum=getDay1(year);//得到年份带来的天数差
	if(year<2011){
		sum = sum-getDay2(year,month,day);
		int ans = sum%7;
		printf("%d",ans==6?7:abs(6-ans));
	}else{
		sum = sum+getDay2(year,month,day);
		int ans = sum%7;
		printf("%d",(6+ans)>7 ? ((6+ans)%7) : (6+ans));
	}
	return 0;
}
