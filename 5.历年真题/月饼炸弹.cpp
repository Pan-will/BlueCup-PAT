#include<stdio.h>
int runnian(int year) {  
    int flag;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {  
        flag = 1; 
    }else{  
        flag = 0;  
    }
    return flag;
} 
int yuefen(int i){
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) return 0;
	else if(i==2) return 1;
	else return 2;
}
int main(){
	int year=2014,month=11,day=9;
	for(int i=1;i<=1000;i++){
		if(yuefen(month)==0){//31天的月份 
			day++;//日递增 
			if(day==32){
				month++;//下一月 
				day = 1;//日从1开始计 
				if(month==13){
					year++;
					month = 1;
				}
			}
		}else if(yuefen(month)==1){//2月份 
			if(runnian(year)==1){//闰年 
				day++;
				if(day==30){
					month++;//下一月 
					day = 1;
					if(month==13){
						year++;//明年 
						month = 1;
					}
				}
				printf("%d\n",day);
			}else{//非闰年 
				day++;
				if(day==29){
					month++;
					day = 1;
					if(month==13){
						year++;
						month = 1;
					}
				}
			}
		} else{//30天的月份 
			day++;
			if(day==31){
				month++;//下个月 
				day = 1;
				if(month==13){
					year++;//明年 
					month = 1;
				}
			}
		}
	}
	printf("%d %d %d",year,month,day);
}

