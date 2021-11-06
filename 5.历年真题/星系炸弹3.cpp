#include<stdio.h>
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
main(){
	int monthday[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//闰年月份 
	int year=2014,month=11,day=9;//贝塔炸弹放置日期 
	for(int i=0;i<1000;i++){
		day++;
		if(day>monthday[month-1]){
			day=1;
			month++;//下一月 
			if(month>12){
				month=1;
				year++;//下一年 
				if(runnian(year)==1){
					monthday[1]=29;
				}else if(runnian(year)==0){
					monthday[1]=28;
				}
			}
		}
	}
	printf("%d-%d-%d",year,month,day);
}
