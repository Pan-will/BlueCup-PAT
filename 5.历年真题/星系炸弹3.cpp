#include<stdio.h>
//���귵��1,���򷵻�0    
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
	int monthday[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//�����·� 
	int year=2014,month=11,day=9;//����ը���������� 
	for(int i=0;i<1000;i++){
		day++;
		if(day>monthday[month-1]){
			day=1;
			month++;//��һ�� 
			if(month>12){
				month=1;
				year++;//��һ�� 
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
