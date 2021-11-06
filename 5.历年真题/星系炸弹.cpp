#include<stdio.h>
#include<string.h> 
//闰年返回1,否则返回0    
int runnian(int year) {  
    int flag;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {  
        flag = 1;  
    }else{  
        flag = 0;  
    }
    return flag; 
}  

int main(){
	int run[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//闰年月份 
	int nrun[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//非闰年月份 
	int year=2014,month=11,day=9;//贝塔炸弹放置日期 
	int sumDays=0;//经过的天数 
	int type=runnian(year);
	int mon[12];
	//根据是否为闰年分配月份 
	if(type==1){
		memcpy(mon,run,sizeof(run));
	}else{
		memcpy(mon,nrun,sizeof(nrun));
	}
	for(int i=0;i<1000;i++){
		day++;
		if(day>mon[month-1]){
			month++;
			day=1;
			if(month>12){
				year++;
				month=1;
				if(runnian(year)==1){
					mon[1]=29;
				}else{
					mon[1]=28;
				}
			}
		}
	}
	printf("%d-%d-%d",year,month,day);
}
