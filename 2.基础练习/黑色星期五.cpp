#include <stdio.h>     
int AllWeek(int year){  
    //已知1998年1月1日是星期四  
    int i=1998,week=3;  
    int days=0;  
    for(i=1998;i<year;i++)  
    {  
        if(i%400==0||(i%4==0&&i%100!=0))  
            days+=366;  
        else  
            days+=365;  
    }      
    return (days+week)%7;  
}  
void ShowFd(int year){  
    int day[2][12]={{31,28,31,30,31,30,31,31,30,31,30},{31,29,31,30,31,30,31,31,30,31,30}};  
    int week=AllWeek(year);
	int flag=year%400==0 || (year%4==0&&year%100!=0) ? 1:0;  
    int times=0,i,days=0;  
      
    //遍历12个月   
    for(i=0;i<12;i++){ 
        //判断每个月13号是否是黑色星期五   
        if((days+12+week)%7==4)
        	times++;
        days+=day[flag][i]; 
    }
	printf("%d",times);
}   
  
int main(){  
    int year;  
    scanf("%d",&year);  
    ShowFd(year);  
    return 0;  
}
