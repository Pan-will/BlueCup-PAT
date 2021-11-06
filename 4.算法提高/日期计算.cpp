#include<stdio.h>
#include<stdlib.h>
/*�ж����꺯��������һ��,���겻��,�İ�������.*/
bool leap(int year){
	if(year%4==0 && year%100!=0)
		return true;
	if(year%400==0)
		return true;
	return false;
}
/*��ݴ�����������*/
getDay1(int year){
	int sum=0;//��¼��ݴ�����������
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
/*�·ݴ�����������*/
int getDay2(int year,int mon,int day){
	int sum=0;//��¼�·ݴ�����������
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
	return sum-1;//�ӵ���׼����ʱ��ʵ�����1 
}
/*
�ڵó�����֮�󣬻�Ҫ����������Ƚ��õ���������day%7���õ����ڲ�;

��1��������������С�ڵ��ڻ�����ݣ���ôӦ�ôӻ���ʱ�䣨��������
	�򸺷�����day%7�죬ע��1֮��Ҫ���7;
	
��2�������������ݴ��ڻ�����ݣ���ôӦ�ôӻ���ʱ�䣨��������
	����������day%7�죬ע��7֮��Ҫ���1.
	
ע��abs():ȡ����ֵ������ 
*/
int main(){
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int sum=getDay1(year);//�õ���ݴ�����������
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
